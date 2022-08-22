#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of argulent + 1
 * @argv: list of all argument + file name
 *
 * Description: displays the information contained in
 * the ELF header at the start of an ELF file
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int file_open = 0;
	int data_read = 0;
	int i = 0;

	if (argc != 2)
		return (0);
	file_open = open(argv[1], O_RDONLY);
	if (file_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == 0)
	{
		if (close(file_open) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_open);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	data_read = read(file_open, header, sizeof(Elf64_Ehdr));
	if (data_read == -1)
	{
		free(header);
		if (close(file_open) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_open);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: No such file %s\n", argv[1]);
		exit(98);
	}
	if (header->e_ident[0] != 'E' && header->e_ident[1] != 'L' && header->e_ident[2] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
	printf("  Class:                             ");
	if (header->e_ident[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (header->e_ident[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	printf("  Data:                              ");
	if (header->e_ident[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	printf("  Version:                           %d", header->e_ident[EI_VERSION]);
	if (header->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf("\n");
	printf("  OS/ABI:                            ");
	if (header->e_ident[EI_OSABI] == ELFOSABI_NONE)
		printf("UNIX - System V\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		header->e_type >>= 8;
	printf("  Type:                              ");
	if (header->e_type == ET_NONE)
		printf("NONE (None)\n");
	else if (header->e_type == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (header->e_type == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (header->e_type == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (header->e_type == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", header->e_type);
	printf("  Entry point address:               ");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		header->e_entry = ((header->e_entry << 8) & 0xFF00FF00) |
			  ((header->e_entry >> 8) & 0xFF00FF);
		header->e_entry = (header->e_entry << 16) | (header->e_entry >> 16);
	}

	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)header->e_entry);

	else
		printf("%#lx\n", header->e_entry);
	free(header);
	if (close(file_open) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", file_open);
		exit(98);
	}
	free(header);
	return (0);
}

/*
 * File: 100-elf_header.c
 * Auth: Suara Ayomide
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_file(unsigned char *elf_num);
void print_magic_num(unsigned char *elf_num);
void print_elf_class(unsigned char *elf_class);
void print_elf_data(unsigned char *elf_class);
void print_elf_version(unsigned char *elf_version);
void print_elf_abi(unsigned char *elf_version);
void print_elf_osabi(unsigned char *elf_version);
void print_elf_type(unsigned int elf_type, unsigned char *elf_class);
void print_elf_entry(unsigned long int elf_entry, unsigned char *elf_class);
void close_elf_file(int elf_desc);

/**
 * check_elf_file - Checks if a file is an ELF file.
 * @elf_num: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf_file(unsigned char *elf_num)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (elf_num[i] != 127 &&
		    elf_num[i] != 'E' &&
		    elf_num[i] != 'L' &&
		    elf_num[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_num - Prints the magic numbers of an ELF header.
 * @elf_num: A pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are separated by spaces.
 */
void print_magic_num(unsigned char *elf_num)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", elf_num[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - Prints the class of an ELF header.
 * @elf_class: A pointer to an array containing the ELF class.
 */
void print_elf_class(unsigned char *elf_class)
{
	printf("  Class:                             ");

if (elf_class[EI_CLASS] == ELFCLASSNONE)
    printf("none\n");
else if (elf_class[EI_CLASS] == ELFCLASS32)
    printf("ELF32\n");
else if (elf_class[EI_CLASS] == ELFCLASS64)
    printf("ELF64\n");
else
    printf("<unknown: %x>\n", elf_class[EI_CLASS]);
}

/**
 * print_elf_data - Prints the data of an ELF header.
 * @elf_class: A pointer to an array containing the ELF class.
 */
void print_elf_data(unsigned char *elf_class)
{
	printf("  Data:                              ");

	if (elf_class[EI_DATA] == ELFDATANONE)
		printf("none\n");
	else if (elf_class[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (elf_class[EI_DATA] ==  ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", elf_class[EI_CLASS]);
}

/**
 * print_elf_version - Prints the version of an ELF header.
 * @elf_version: A pointer to an array containing the ELF version.
 */
void print_elf_version(unsigned char *elf_version)
{
	printf("  Version:                           %d",
	       elf_version[EI_VERSION]);

	switch (elf_version[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_osabi - Prints the OS/ABI of an ELF header.
 * @elf_version: A pointer to an array containing the ELF version.
 */
void print_elf_osabi(unsigned char *elf_version)
{
	printf("  OS/ABI:                            ");

	switch (elf_version[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_version[EI_OSABI]);
	}
}

/**
 * print_elf_abi - Prints the ABI version of an ELF header.
 * @elf_version: A pointer to an array containing the ELF ABI version.
 */
void print_elf_abi(unsigned char *elf_version)
{
	printf("  ABI Version:                       %d\n",
	       elf_version[EI_ABIVERSION]);
}

/**
 * print_elf_type - Prints the type of an ELF header.
 * @elf_type: The ELF type.
 * @elf_class: A pointer to an array containing the ELF class.
 */
void print_elf_type(unsigned int elf_type, unsigned char *elf_class)
{
	if (elf_class[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %s>\n", elf_class);
	}
}

/**
 * print_elf_entry - Prints the entry point of an ELF header.
 * @elf_entry: The address of the ELF entry point.
 * @elf_class: A pointer to an array containing the ELF class.
 */
void print_elf_entry(unsigned long int elf_entry, unsigned char *elf_class)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry = ((elf_entry << 8) & 0xFF00FF00) |
			  ((elf_entry >> 8) & 0xFF00FF);
		elf_entry = (elf_entry << 16) | (elf_entry >> 16);
	}

	if (elf_class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry);

	else
		printf("%#lx\n", elf_entry);
}

/**
 * close_elf_file - Closes an ELF file.
 * @elf_desc: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf_file(int elf_desc)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf_desc);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_file(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf_file(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf_file(header->elf_num);
	printf("ELF Header:\n");
	print_magic_num(header->elf_num);
	print_elf_class(header->elf_class);
	print_elf_data(header->elf_class);
	print_elf_version(header->elf_version);
	print_elf_osabi(header->elf_version);
	print_elf_abi(header->elf_version);
	print_elf_type(header->elf_type, header->elf_class);
	print_elf_entry(header->elf_entry, header->elf_class);

	free(header);
	close_elf_file(op);
	return (0);
}

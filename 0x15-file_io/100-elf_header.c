#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * open_and_validate_file - open and validate the file
 * @filename: the file to validate
 * @header: the section to open
 *
 * Return: Always 0 for success
 */

int open_and_validate_file(char *filename, Elf64_Ehdr *header)
{
	ssize_t file;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		fprintf(stderr, "Error: unable to open file '%s'\n", filename);
		exit(98);
	}
	if (read(file, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: unable to read ELF header\n");
		close(file);
		exit(98);
	}
	if (memcmp(header->e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error file '%s' is not an elf file\n", filename);
		close(file);
		exit(98);
	}
	return (file);
}

/**
 * display_attributes -  displays basics attributes
 * @header: the section of the code
 *
 * Return: ALlway 0 for success
 */
void display_attributes(Elf64_Ehdr *header)
{
	int i;

	printf("Elf Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:		");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("  Data:			");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endians\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endians\n");
			break;
		default:
			printf("Invalid\n");
			break;
	}
	printf("	Version:		%d (current)\n", header->e_ident[EI_VERSION]);
}

/**
 * display_osabi_info - displays obasi infor
 * @header: the header section
 *
 * Return: void since were void
 */
void display_osabi_info(Elf64_Ehdr *header)
{
	printf("  OS/ABI:		");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
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
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
			break;
	}
	printf(" ABI Version:		%d\n", header->e_ident[EI_ABIVERSION]);
}
/**
 * display_type_and_entry - displays type and entry
 * @header: the elf section
 *
 * Return: void since were void
 */

void display_type_and_entry(Elf64_Ehdr *header)
{

	printf(" Type:		");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REl (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Ecexution file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
	}
	printf(" Entry point address:		0x%x\n", (unsigned int)header->e_entry);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 doe success
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fd = open_and_validate_file(argv[1], &header);

	display_attributes(&header);
	display_osabi_info(&header);

	display_type_and_entry(&header);

	close(fd);
	return (0);
}

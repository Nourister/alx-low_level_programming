#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * print_elf_header - printing out the information contained
 * in the ElfHeader structure.
 * @ElfHeader: represents the header of an ELF (Executable
 * and Linkable Format) file.
 * @header: a pointer to structure ElfHeader
 * Return: 0(success)
 */

void print_elf_header(const ElfHeader *header)
{
	printf("Displayed information:\n");
	printf("Magic: %c%c%c\n", header->magic[0],
	header->magic[1], header->magic[2]);
	printf("Class: %d\n", header->class);
	printf("Data: %d\n", header->data);
	printf("Version: %d\n", header->version);
	printf("OS/ABI: %d\n", header->osabi);
	printf("ABI Version: %d\n", header->abiversion);
	printf("Type: %d\n", header->type);
	printf("Entry point address: 0x%08x\n", header->entry);
	printf("\n");
}

/**
 * main - Entry point  for the execution of a program
 * @argc: number of command-line arguments passed to the program
 * @argv: an array of strings that holds the command-line arguments
 * Return: integer value
 */

int main(int argc, char *argv[])
{
	int fd;
	ElfHeader header;
	ssize_t num_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	num_read = read(fd, &header, sizeof(ElfHeader));
	if (num_read == -1)
	{
		perror("Error reading file");
		close(fd);
		return (98);
	}

	if (memcmp(header.magic, "\x7F" "ELF", 4) != 0)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}


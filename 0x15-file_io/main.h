#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdint.h>

/**
 * typedef struct - define a structure named ElfHeader
 *
 * Return: 0(success)
 */

typedef struct {
	unsigned char magic[4];
	unsigned char class;
	unsigned char data;
	unsigned char version;
	unsigned char osabi;
	unsigned char abiversion;
	unsigned char padding[7];
	uint16_t type;
	uint16_t machine;
	uint32_t version2;
	uint32_t entry;
	uint32_t phoff;
	uint32_t shoff;
	uint32_t flags;
	uint16_t ehsize;
	uint16_t phentsize;
	uint16_t phnum;
	uint16_t shentsize;
	uint16_t shnum;
	uint16_t shstrndx;
} ElfHeader;

void print_elf_header(const ElfHeader *header);

int main(int argc, char *argv[]);

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */

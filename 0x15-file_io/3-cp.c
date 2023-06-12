#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
/**
 * print_error - printing an error message to the standard error stream
 * @error_message: A string format specifying the error message
 * to be printed.
 * @file_name: The name of the file associated with the error
 * @exit_code: used when terminating the program.
 *
 * Return: 0(success)
 */
void print_error(const char *error_message, const char *file_name,
int exit_code)
{
	dprintf(STDERR_FILENO, error_message, file_name);
	exit(exit_code);
}
/**
 * close_files -  closing two file descriptors.
 * @fd_from: The file descriptor of the file being copied from.
 * @fd_to: The file descriptor of the file being copied to.
 * Return: 0(success)
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}
/**
 * copy_file - copying of the content from one file to another.
 * @file_from: The name of the source file from which the
 * content is being copied.
 * @file_to: The name of the destination file where the
 * content is being copied
 * Return: 0(success)
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
	S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		print_error("Error: Can't write to %s\n", file_to, 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			print_error("Error: Can't write to %s\n", file_to, 99);
	}

	if (bytes_read == -1)
		print_error("Error: Can't read from file %s\n", file_from, 98);

	close_files(fd_from, fd_to);
}
/**
 * main - main function of the program.
 * @argc: number of command_line arguments in the program
 * @agrv: An array of pointers to the arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}

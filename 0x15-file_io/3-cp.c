#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
/**
 * display_error - This will display an error message to stderr and exit.
 * @code: Represents the exit code.
 * @message: Describes the error message to display.
 */
void display_error(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
/**
 * copy_file - It will copy the content of one file to another.
 * @source: Describes the source file descriptor.
 * @dest: Represents the destination file descriptor.
 */
void copy_file(int source, int dest)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(source, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest, buffer, bytes_read);
if (bytes_written == -1)
{
display_error(99, "Error: Can't write to file_to");
}
}
if (bytes_read == -1)
{
display_error(98, "Error: Can't read from file_from");
}
}
/**
 * main - Entry point for the cp program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
int source_fd, dest_fd;
if (argc != 3)
{
display_error(97, "Usage: cp file_from file_to");
}
source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
display_error(98, "Error: Can't read from file_from");
dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
| S_IWUSR | S_IRGRP | S_IROTH);
if (dest_fd == -1)
{
close(source_fd);
display_error(99, "Error: Can't write to file_to");
}
copy_file(source_fd, dest_fd);
if (close(source_fd) == -1)
display_error(100, "Error: Can't close source file descrip.");
if (close(dest_fd) == -1)
display_error(100, "Error: Can't close dest. file descrip.");
return (0);
}

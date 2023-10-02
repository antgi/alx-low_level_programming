#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- This will read text file print to STDOUT.
 * @filename: Describes the text file being read
 * @letters: Represents  number of letters to be read
 * Return: w- actual numer of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fid;
ssize_t wr;
ssize_t tr;
fid = open(filename, O_RDONLY);
if (fid == -1)
return (0);
buf = malloc(sizeof(char) * letters);
tr = read(fid, buf, letters);
wr = write(STDOUT_FILENO, buf, tr);
free(buf);
close(fid);
return (wr);
}

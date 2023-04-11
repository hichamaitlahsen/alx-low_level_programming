#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *bf;
ssize_t fold;
ssize_t wri;
ssize_t t1;

fold = open(filename, O_RDONLY);
if (fold == -1)
return (0);
bf = malloc(sizeof(char) * letters);
t1 = read(fold, bf, letters);
wri = write(STDOUT_FILENO, bf, t1);

free(bf);
close(fold);
return (wri);
}

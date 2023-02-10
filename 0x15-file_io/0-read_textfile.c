#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX strdout
 * @letters: the number of letters it should read and print
 * @filename: pointer to the file
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars;
	int file_directory;
	char *buffer;

	if (!filename)
		return (0);
	file_directory = open(filename, O_RDONLY);
	if (file_directory == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);

	chars = read(file_directory, buffer, letters);
	if (chars < 0)
		return (0);
	chars = write(STDOUT_FILENO, buffer, chars);
	if (chars < 0)
		return (0);
	free(buffer);
	close(file_directory);
	return (chars);
}

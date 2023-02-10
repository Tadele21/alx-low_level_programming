#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: null terminated string to add at the end of the file
 * @filename: name of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_directory, size;
	/* task condition */
	if (!filename)
		return (-1);
	/* The file is opened in append mode */
	file_directory = open(filename, O_RDWR | O_APPEND);
	if (file_directory == -1)
		return (-1);
	if (text_content)
	{
		/* we need the size of the content */
		for (size = 0; text_content[size] != '\0'; size++)
			;
		/* ssize_t write(int file_directory, const void *buf, size_t count); */
		write(file_directory, text_content, size);
	}

	close(file_directory);
	return (1);
}

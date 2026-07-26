#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int count_dict_bytes(void)
{
	int fd;
	ssize_t bytes_read;
	char *buffer;
	size_t buffer_size;

	buffer_size = 4096;
	buffer = (char *)malloc(buffer_size);
	if (!buffer)
		return (1);

	fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write (2, "error al abrir el archivo\n", 26);
		free(buffer);
		return (1);
	}
	bytes_read = read(fd, buffer, buffer_size);
	while (bytes_read > 0)
        bytes_read = read(fd, buffer, buffer_size);
    free(buffer)
    close(fd);
    return (0);
}

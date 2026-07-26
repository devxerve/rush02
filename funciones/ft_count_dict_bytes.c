#include <fcntl.h>
#include <unistd.h>

size_t	ft_count_dict_bytes(void)
{
	int		fd;
	size_t	bytes_read;
	char	buffer[4096];
	int		total_bytes;

	total_bytes = 0;
	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "error al abrir el archivo\n", 26);
		return (-1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		total_bytes += bytes_read;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (total_bytes);
}

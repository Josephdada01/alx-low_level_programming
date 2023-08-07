#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd_r, fd_w, bytes_read, bytes_written;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(1);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		perror("Error opening source file");
		exit(2);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w < 0)
	{
		perror("Error opening destination file");
		close(fd_r);
		exit(3);
	}
	while ((bytes_read = read(fd_r, buf, BUFSIZ)) > 0)
	{
		bytes_written = write(fd_w, buf, bytes_read);
		if (bytes_written != bytes_read)
		{
			perror("Error writing to destination file");
			close(fd_r);
			close(fd_w);
			exit(4);
		}
	}
	if (bytes_read < 0)
	{
		perror("Error reading from source file");
		close(fd_r);
		close(fd_w);
		exit(5);
	}
	if (close(fd_r) < 0 || close(fd_w) < 0)
	{
		perror("Error closing file descriptor");
		exit(6);
	}
	return (0);
}

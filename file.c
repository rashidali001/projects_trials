#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd;
	char buf[25];

	fd = open("rashid.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		printf("Failed to create a file");
		exit(1);
	}

	write(fd, "Hello my name is rashid\n", 24);

	close (fd);

	/* Openning rashid.txt */

	fd = open("rashid.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to read the file");
		exit(1);
	}

	read(fd, buf, 24);
	buf[24] = '\0';
	close(fd);

	printf("buf: %s\n", buf);

	return (0);

}

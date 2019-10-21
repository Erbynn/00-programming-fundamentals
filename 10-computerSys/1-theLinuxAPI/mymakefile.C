#include <iostream>
#include <cstring>
#include <string>
#include <unistd.h>
#include <fcntl.h>

int main() {
	std::string str = "Hello, world";
	int fd = open("Result", O_RDWR | O_CREAT, 0644);

	if ( fd < 0 ) {
		perror("Result");
		exit(1);
	}

	write(fd, str.c_str(), std::strlen(str.c_str()));
	close(fd);
}

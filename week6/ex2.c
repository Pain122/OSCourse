#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

char *text = "Ex1 OS course.";

int main() {
    int p[2];
	char string[14];
	if (pipe(p) < 0) {
		return 1;
	}
	write(p[1], text, 14);
	if (fork == 0) {
		read(p[0], string, 14);
		printf("%s", string);
		exit(0);
	}
	return 0;
}
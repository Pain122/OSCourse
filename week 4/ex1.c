#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
	int n;
	if (fork()) {
		printf("Hello from child [%d - %d]\n", getpid(), n);
	} else {
		printf("Hello from parent [%d - %d]\n", getpid(), n);
	}
}
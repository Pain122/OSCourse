#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
	for (int i = 0; i < 3; i++) {
		fork();
		fork();
		fork();
		fork();
		fork();
		system("sleep 5");
	}
}
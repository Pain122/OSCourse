#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void useSIGINT() {
	printf("\nMUDA MUDA MUDA MUDA!!!!\n");
}

int main() {
    signal(SIGINT, useSIGINT);
	
	while(1) {
		
	}
	return 0;
}
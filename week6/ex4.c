#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void useSIGINT() {
	printf("\nMUDA MUDA MUDA MUDA!!!!\n");
}
void useSIGKILL() {
	printf("\nRODA RORA DA!!!\n");
}
void useSIGSTOP() {
	printf("\nTOKI WO TOMARE!!!\n");
}
void useSIGINT() {
	printf("\nWRYYYYYYYYY!!!!\n");
}

int main() {
    signal(SIGINT, useSIGINT);
	signal(SIGKILL, useSIGKILL);
	signal(SIGSTOP, useSIGSTOP);
	signal(SIGUSR1, useSIGURS1);
	
	while(1) {
		
	}
	return 0;
}
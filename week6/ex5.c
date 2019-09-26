#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();
	if (pid == 0) {
		while (1) {
			printf("I am Alive\n");
			sleep(1);
		}
	} else {
		sleep(10);
		printf("Wake up Samurai\n");
		kill(pid, SIGTERM);
		printf("Child was killed - %d\n", pid);
		return 0;
	}
}
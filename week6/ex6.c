#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid;
    int pid2;
    int p[2];
    if (pipe(p) < 0) {
        exit(0);
    }
    if ((pid = fork()) != 0) {
        if ((pid2 = fork()) != 0) {
            write(p[1], &pid2, sizeof(int));
            printf("\nPora spatb (parent)\n");
            waitpid(pid2, NULL, WUNTRACED);
            printf("\nYa probudilsya (parent)\n");
            return 0;
        } else {
            while (1);
        }
    } else {
        read(p[0], &pid2, sizeof(int));
        printf("\nYou are not his son! (child1)\n");
        kill(pid2, SIGSTOP);
        exit(0);
    }
}
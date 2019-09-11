#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void askInput(char command[100]) {
    printf(">>");
    gets(command);
}

void runProcess(char command[100]) {
    system(command);
}

int main() {
    char s[100];
    int n;
    while (1) {
        askInput(s);
        if (fork()) {
            runProcess(s);
            exit;
        }
    }
    
    return 0;
}
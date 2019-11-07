#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]) {
    int count = 0;
    int flag = 0;
    
    if (!strcmp(argv[1], "-a")) {
        flag = 1;
        count = argc-flag-1;
    } else {
        count = argc - 1;
    }

    FILE* files[count];
    
    for (int i = 0; i < count; i++) {
        if (flag == 1) {
            files[i] = fopen(argv[i + 2], "a");
        } else {
            files[i] = fopen(argv[i + 1], "w");
        }
        if(!files[i]) {
            printf("Ne otkrilisb");
        }
    }
    
    char line[BUFSIZ];
    
    while (fgets(line, BUFSIZ, stdin) != NULL) {
        printf("%s", line);
         for (int i = 0; i < count; i++) {
             fprintf(files[i], "%s", line);
         }
     }
     
     return 0;
}

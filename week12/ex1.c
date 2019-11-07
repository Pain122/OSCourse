#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    FILE *ran;
    FILE *ex1;
    
    if (((ran = fopen("/dev/random", "r")) == NULL) || ((ex1 = fopen("ex1.txt", "w")) == NULL)) {
        printf("Can not open files");
        return 1;
    }
    
    char string;
    
    for (int i = 0; i < 20; i++) {
        string = fgetc(ran);
        printf("%c", string);
        fputc(string, ex1);
    }
    
    fclose(ran);
    fclose(ex1);
    
    return 0;
}

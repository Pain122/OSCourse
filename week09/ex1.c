#include <stdio.h>
#include <stdlib.h>
#define NUMBER 30

int main() {
    int n[NUMBER];
    int age[NUMBER];
    float hit = 0;
    float miss = 0;
    for (int i = 0; i < NUMBER; i++) {
        age[i] = (n[i] = 0);
    }

    printf("Input the number of pages:_ ");

    int num = 0;
    scanf("%d", &num);
    printf("\n");

    FILE *fp;
    fp = fopen("Lab 09 input.txt", "r");

    int counter = 0; //used to count how many symbols we have already read
    char c; //Used to read the next symbol
    int inpNum = 0; // Used to store the read number
    while (num != counter) {
        c = (char) fgetc(fp);
        if ((c != ' ') && (c != EOF) && (c != '\n')) {
            inpNum = inpNum*10 + (c-48); //minus the ascii offset
        } else {
            int checkHit = 0;
            for (int i = 0; i < NUMBER; i++) { //checks if there is a hit
                if (n[i] == inpNum) {
                    checkHit++;
                    age[i] = (age[i] / 2) + 1024;
                } else {
                    age[i] = age[i] / 2;
                }
            }
            if (checkHit != 0) { //if hit, do nothing and make plus 1 hit
                   hit++;
                   inpNum = 0;
               } else {
                   miss++;
                   if (counter < NUMBER) { //If there is an empty space just insert a new page
                       n[counter] = inpNum;
                       age[counter] = 1024;
                   } else {  //Otherwise search for the oldest one
                       int oldestValue = 999999999; //to find oldest value
                       int oldestIndex = 0; //index of the oldest value
                       for (int i = 0; i < NUMBER; i++) {
                           if (age[i] <= oldestValue) {
                               oldestIndex = i;
                               oldestValue = age[i];
                           }
                       }
                       n[oldestIndex] = inpNum;
                       age[oldestIndex] = 1024;
                   }
                   inpNum = 0;
               }
            counter++;
            }
        }
    fclose(fp);
    printf("Hit rate: %f\n", hit/(hit+miss));
    printf("Miss rate: %f", miss/(hit+miss));
    return 0;
}
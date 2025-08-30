/* 
Name: Othmane Harraq
TUID: 916315325
Section: 1
Project: Project Git
Program: This program returns a random 
alphabet letter, which is used in the
print_random.c function to print a 7 letter
word randomly 
*/

#include <stdlib.h>
#include <time.h>

char randchar() {

    char character = 'A' + (rand() % 26);
    return character;
}
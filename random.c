#include <stdlib.h>
#include <time.h>

char randchar() {

    char character = 'A' + (rand() % 26);
    return character;
}
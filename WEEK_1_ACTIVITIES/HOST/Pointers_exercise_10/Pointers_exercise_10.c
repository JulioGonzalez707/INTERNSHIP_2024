/*
 * Pointers_exercise_10.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>

int StringLength(const char *chain) {
    const char *p = chain;
    while (*p != '\0') {
        p++;
    }
    return p - chain;
}

int main() {
    char chain[] = "juliogonzalez";

    int length = StringLength(chain);

    printf("The length of the string %s is: %d\n", chain, length);

    return 0;
}

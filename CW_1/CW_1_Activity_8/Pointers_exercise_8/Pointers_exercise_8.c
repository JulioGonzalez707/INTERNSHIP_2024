/*
 * Pointers_exercise_8.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */

#include <stdio.h>
#include <string.h>


void swap(char *x, char *y) {
    char change = *x;
    *x = *y;
    *y = change;
}

void Permutations(char *str, int beginning, int end) {
    if (beginning == end) {
        // Imprimir la permutación actual
        printf("%s  \n", str);
    } else {
        for (int i = beginning; i <= end; i++) {

            swap((str + beginning), (str + i));
            Permutations(str, beginning + 1, end);
            swap((str + beginning), (str + i));
        }
    }
}

int main() {
    char chain[] = "abcd";

    printf("Permutations are : \n");
    Permutations(chain, 0, strlen(chain) - 1);

    return 0;
}

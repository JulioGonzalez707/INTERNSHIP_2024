/*
 * Pointers_exercise_9.c
 *
 *  Created on: Jan 11, 2024
 *      Author: julio
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 100;

    int *numbers = (int *)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Error in memory allocation.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 10;
    }

    printf("Numbers randomly generated:\n");
    for (int i = 0; i < n; i++) {
        printf("%d  ", numbers[i]);
    }

    int maximum = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    printf("\n The biggest element is: %d \n", maximum);

    free(numbers);

    return 0;
}

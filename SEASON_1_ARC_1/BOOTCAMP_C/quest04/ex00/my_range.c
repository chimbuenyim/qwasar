#include <stdio.h>
#include <stdlib.h>

int* my_range ( int min , int max) {
    int size = max - min;
    int i = 0;
    int* arr = malloc(sizeof(int) * size);

    if(min >= max) return 0;

    while(i < size) {
        arr[i] = min + i;
        i++;
    }

    return arr;
}
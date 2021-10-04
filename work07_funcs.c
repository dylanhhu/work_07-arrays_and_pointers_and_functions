#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "work07_funcs.h"

void print_array(int *arr, int arr_len) {
    printf("[ ");

    int i;
    for (i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }

    printf("]\n");
}

int avg_array(int *arr, int arr_len) {
    int total = 0;
    int i;

    for (i = 0; i < arr_len; i++) {
        total += arr[i];
    }

    return total;
}

void copy_array(int *arr1, int *arr2, int arr1_len) {
    int i;
    for (i = 0; i < arr1_len; i++) {
        arr2[i] = arr1[i];
    }
}

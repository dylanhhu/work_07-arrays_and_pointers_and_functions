#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "work07_funcs.h"


// 1. Function that takes an array of int
//    and prints it out
void print_array(int *arr, int arr_len) {
    printf("[ ");

    int i;
    for (i = 0; i < arr_len; i++) {
        printf("%d ", arr[i]);
    }

    printf("]\n");
}


// 2. Function that takes an array of int
//    values and returns the average
double avg_array(int *arr, int arr_len) {
    int total = 0;
    int i;

    for (i = 0; i < arr_len; i++) {
        total += arr[i];
    }

    return (double) total / arr_len;
}


// 3. Function that takes two arrays and copies
//    the values of the first to the second
void copy_array(int *arr1, int *arr2, int arr_len) {
    int i;
    for (i = 0; i < arr_len; i++) {
        arr2[i] = arr1[i];
    }
}


// Helpful function that fills the array with
// random numbers
void fill_random_array(int *arr, int arr_len) {
    srand(time(NULL));
    
    int i;
    for (i = 0; i < arr_len; i++) {
        arr[i] = rand();
    }
}


// Helpful function that zeros out the array
void fill_zeros_array(int *arr, int arr_len) {
    int i;
    for (i = 0; i < arr_len; i++) {
        arr[i] = 0;
    }
}

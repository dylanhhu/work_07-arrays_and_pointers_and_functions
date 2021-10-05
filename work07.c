#include <stdio.h>
#include "work07_funcs.h"
#define ARRAY_LENGTH 10

int main() {
    int arr[ARRAY_LENGTH];

    fill_zeros_array(arr, ARRAY_LENGTH);
    printf("Array intial values:\n");
    print_array(arr, ARRAY_LENGTH);

    fill_random_array(arr, ARRAY_LENGTH);
    printf("\nArray with random values:\n");
    print_array(arr, ARRAY_LENGTH);

    printf("\nAverage of the array's values (may overflow): %f\n", avg_array(arr, ARRAY_LENGTH));


    int arr2[ARRAY_LENGTH] = {1, 1, 1, 1, 1, 10, 10, 10, 10, 10};
    printf("\nNew array values:\n");
    print_array(arr2, ARRAY_LENGTH);

    printf("\nAverage of new array: %f\n", avg_array(arr2, ARRAY_LENGTH));

    
    printf("\nTwo arrays:\n");
    print_array(arr, ARRAY_LENGTH);
    print_array(arr2, ARRAY_LENGTH);

    printf("\nSecond array after copying the first to it:\n");
    copy_array(arr, arr2, ARRAY_LENGTH);
    print_array(arr2, ARRAY_LENGTH);

    return 0;
}
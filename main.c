//
// Created by Adam Smolarek on 17.05.2016.
//

#include "stdlib.h"
#include "stdio.h"

#include "generic_defs.h"

int example_map(int a) {
    return a + 1;
}

int example_reduce(int acc, int next) {
    return acc + next;
}

void print(int a){
    printf("%d \n", a);
}

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3};

    int *mapped = map_int_int(arr, 3, example_map);

    for_each_int(mapped, 3, print);

    int reduced_value = reduce_int_int(mapped, 3, 0, example_reduce);

    printf("reduced = %d \n", reduced_value);
    printf("ala ma kota");

    free(mapped);
    return 0;
}
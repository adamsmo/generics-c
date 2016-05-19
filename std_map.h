//
// Created by Adam Smolarek on 17.05.2016.
//
#include "stdlib.h"
#include "std_f.h"

#define MAP(T, RT) TOKENPASTE3(map, T, RT)

RESULT_TYPE *MAP(TYPE, RESULT_TYPE)(TYPE *nums, int len, RESULT_TYPE (*f)(TYPE)) {
    RESULT_TYPE *result = (RESULT_TYPE *) malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        result[i] = f(nums[i]);
    }

    return result;
}



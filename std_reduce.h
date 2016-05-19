//
// Created by Adam Smolarek on 17.05.2016.
//

#include "std_f.h"

#define REDUCE(T,RT) TOKENPASTE3(reduce, T, RT)

RESULT_TYPE REDUCE(TYPE, RESULT_TYPE)(TYPE *nums, int len, RESULT_TYPE initial, RESULT_TYPE (*f)(RESULT_TYPE, TYPE)) {
    RESULT_TYPE result = initial;

    for (int i = 0; i < len; i++) {
        result = f(result, nums[i]);
    }

    return result;
}

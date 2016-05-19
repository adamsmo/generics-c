//
// Created by Adam Smolarek on 17.05.2016.
//

#include "std_f.h"

#define FOR_EACH(T) TOKENPASTE2(for_each_, T)

void FOR_EACH(TYPE)(TYPE *nums, int len, void (*f)(TYPE)) {
    for (int i = 0; i < len; i++) {
        f(nums[i]);
    }
}
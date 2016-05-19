//
// Created by Adam Smolarek on 17.05.2016.
//

#ifndef ARM_I2C_GENERIC_DEFS_H
#define ARM_I2C_GENERIC_DEFS_H

#define TYPE int
#define RESULT_TYPE int

#include "std_map.h"

#undef TYPE
#undef RESULT_TYPE


#define TYPE int
#define RESULT_TYPE int

#include "std_reduce.h"

#undef TYPE
#undef RESULT_TYPE

#define TYPE int

#include "std_foreach.h"

#undef TYPE

#endif //ARM_I2C_GENERIC_DEFS_H

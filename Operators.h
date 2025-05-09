#pragma once
#include <time.h>
#include <stdlib.h>

inline std::string operators(){

    srand(time(0));
    std::string op[] = {"+", "-", "*", "/"} ;

    int index = rand() % 4;
    return op[index];
}

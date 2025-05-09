#include <time.h>
#include <stdlib.h>


inline int Numbers(int a) {
    srand(time(0));
    return rand() % a + 1;
}
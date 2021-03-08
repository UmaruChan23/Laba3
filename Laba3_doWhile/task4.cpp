#include <cmath>
#include "head.h"

double a(int i);

int findFirstElement(double eps) {
    int res = 0;
    int i = 0;
    do {
        if (std::abs(a(i)) <= eps) {
            res = i;
            break;
        }
        i++;
    } while (i <= INT_MAX);

    return res;
}

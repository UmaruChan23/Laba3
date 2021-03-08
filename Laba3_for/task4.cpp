#include <cmath>
#include "head.h"

double a(int i);

int findFirstElement(double eps) {
    int res = 0;
    for (int i = 0; i <= INT_MAX; i++) {
        if (std::abs(a(i)) <= eps){
            res = i;
            break;
        }
    }
    return res;
}

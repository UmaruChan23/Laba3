#include <cmath>
#include "head.h"

double a(int i);

int findFirstNegativeElement(double eps) {
    for (int i = 0; i <= INT_MAX; i++) {
        if (a(i) < 0 && std::abs(a(i)) <= eps)
            return i;
    }
}

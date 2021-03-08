#include <cmath>
#include "head.h"

double a(int i);

int findFirstNegativeElement(double eps) {
    int i = 0;
    while(i <= INT_MAX){
        if (a(i) < 0 && std::abs(a(i)) <= eps)
            return i;
        i++;
    }
}

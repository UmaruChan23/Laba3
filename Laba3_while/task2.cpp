#include <cmath>
#include "head.h"

double a(int i);

double summ2(double eps){
    double sum = a(0);
    int i = 1;
    while(std::abs(a(i)) > eps){
        sum += a(i);
        ++i;
    }
    return sum;
}

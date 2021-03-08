#include <cmath>
#include "head.h"

double a(int i);

double summ2(double eps){
    double sum = 0;
    int i = 0;
    do{
        sum += a(i);
        ++i;
    }while(std::abs(a(i)) > eps);
    return sum;
}

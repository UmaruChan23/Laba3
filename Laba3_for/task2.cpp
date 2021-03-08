#include <cmath>
#include "head.h"

double a(int i);

double summ2(double eps){
    double sum = a(0);
    for(int i = 1; std::abs(a(i)) > eps; i++){
        sum += a(i);
    }
    return sum;
}

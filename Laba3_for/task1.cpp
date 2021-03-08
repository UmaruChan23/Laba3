#include "head.h"

double a(int i);

double summ(int n) {
    double sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += a(i);
    }
    return sum;
}

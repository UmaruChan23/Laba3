#include <cmath>
#include <iostream>
#include "head.h"

using namespace std;

double a(int i);

void print(int n, int k) {
    for (int i = 1; i <= n; i++) {
        if (i % k == 0)
            continue;
        cout << a(i) << " ";
    }
    cout << endl;
}

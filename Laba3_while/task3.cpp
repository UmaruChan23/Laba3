#include <cmath>
#include <iostream>
#include "head.h"

using namespace std;

double a(int i);

void print(int n, int k) {
    int i = 1;
    while(i <= n){
        if (i % k == 0){
            i++;
            continue;
        }
        cout << a(i) << " ";
        i++;
    }
    cout << endl;
}

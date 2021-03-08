double a(int i);

double summDo(int n) {
    double sum = 0;
    int i = 0;
    do {
        sum += a(i);
        ++i;
    } while (i <= n);
    return sum;
}

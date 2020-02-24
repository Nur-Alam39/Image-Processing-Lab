#include <bits/stdc++.h>
using namespace std;
#define eps 1e-15

double f(double x) {
    return x * x - 4.0 * x - 10.0;
}

double falsi(double a, double b) {
    return (a * f(b) - b * f(a)) / (f(b) - f(a));
}

int main() {
    double lo = 5, hi = 6;
    int i=1;
    while (fabs(hi - lo) >= eps) {
        cout<<i++<<endl;
        double mid = falsi(lo, hi);
        if (f(mid) < 0) lo = mid;
        else hi = mid;
    }
    cout << setprecision(6) << fixed << lo << endl;
}

/*/
cos(x) = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - ...

/*/
#include <iostream>
#include <cmath>
using namespace std;
double calculateCos(double x, int n) {
    double result = 1.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        term *= (-1) * x * x / ((2 * i) * (2 * i - 1));
        result += term;
    }

    return result;
}

int main() {
    double x;
    int n;

    cout << "Please enter the value of x: ";
    cin >> x;

    cout << "Please enter the value of n: ";
    cin >> n;

    double cosValue = calculateCos(x, n);
    cout << "cos(" << x << ") = " << cosValue << endl;

    return 0;
}

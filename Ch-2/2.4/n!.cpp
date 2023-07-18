#include <iostream>
using namespace std;
int factorial(int n) {
   int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int fact = factorial(n);
        cout << "The factorial of " << n << " is: " << fact << endl;
    }
    return 0;
}


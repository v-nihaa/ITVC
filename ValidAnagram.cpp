#include <iostream>
using namespace std;

int main() {
    long long a = 1;
    long long b = 2;
    long long sum = 0;

    while (a <= 4000000) {
        if (a % 2 == 0) {
            sum += a;
        }

        long long next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of even Fibonacci numbers below 4 million is: " << sum;

    return 0;
}

#include <iostream>

double customPow(double base, int exponent) {
    double result = 1.0;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    return result;
}

double calculateRoot(double a, int n, double e) {
    double x = a;  // Assume the initial value of the root is a
    double diff = 1.0;  // Set an initial difference larger than e

    while (diff > e) {
        double prevX = x;  // Store the previous value of x
        double numerator = (n - 1) * x;
        double denominator = customPow(x, n - 1);

        x = (1.0 / n) * (numerator + (a / denominator));  // Iteration formula
        diff = std::abs(x - prevX);  // Calculate the new difference
    }

    return x;
}

int main() {
    double a, e;
    int n;
    std::cin >> a >> n >> e;

    double result = calculateRoot(a, n, e);

    std::cout << result << std::endl;

    return 0;
}
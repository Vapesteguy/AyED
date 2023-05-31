#include <iostream>

int main() {
    double pi = 0.0;
    int sign = 1;
    int denominator = 1;
    double epsilon = 1e-6;  // Precisión deseada (6 decimales)

    while (1.0 / denominator >= epsilon) {
        pi += sign * (1.0 / denominator);
        sign *= -1;
        denominator += 2;
    }

    pi *= 4.0;

    std::cout.precision(10);
    std::cout << "Valor de pi: " << pi << std::endl;

    return 0;
}



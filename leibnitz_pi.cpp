#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>

int main() {
    // Step 1: Implement the Leibnitz formula for π
    double pi = 0.0;
    int n;

    std::cout << "Enter the upper bound n: ";
    std::cin >> n;

    for (int k = 0; k <= n; ++k) {
        // Implement the Leibnitz formula here
        pi += pow(-1, k) / (2.0 * k + 1);
    }

    // Step 2: Print and display the value of pi to 15 decimal places
    std::cout << std::fixed << std::setprecision(15);
    std::cout << "PI (approx): " << pi << "; n: " << std::setw(7) << n << std::endl;
    std::cout << "PI (actual): " << "3.141592653589793" << std::endl;

    // Optional: Print the value of DBL_DIG and DBL_MANT_DIG macro constants
    std::cout << "Decimal digits of precision: " << DBL_DIG << std::endl;
    std::cout << "Number of base 2 mantissa digits of double precision floating point value: "
              << DBL_MANT_DIG << std::endl;

    // Step 4: Use std::nextafter method to check representation precision
    std::cout << "Next representable number from 3.141592653589793: "
              << std::nextafter(3.141592653589793, 3.14) << std::endl;

    return 0;
}

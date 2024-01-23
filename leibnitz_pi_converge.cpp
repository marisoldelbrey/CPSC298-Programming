#include <iostream>
#include <iomanip>
#include <cmath>
#include <cfloat>

int main() {
    // Reuse code from Part I
    for (int n = 2; n <= 1048576; n *= 2) {
        double pi = 0.0;

        // Inner loop to calculate pi using Leibnitz formula
        for (int k = 0; k <= n; ++k) {
            pi += pow(-1, k) / (2.0 * k + 1);
        }

        // Display the value of pi and n
        std::cout << "PI (approx): " << std::fixed << std::setprecision(15)
                  << pi << "; n: " << std::setw(7) << n << std::endl;
    }

    return 0;
}

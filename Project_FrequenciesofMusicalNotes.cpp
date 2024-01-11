#include <iostream>
#include <cmath>

int main() {
    // Constants
    const double dTwelfthRootOfTwo = 1.059463094359;
    const int iSpeedOfSound = 345; // in meters per second

    // Display reference frequency
    std::cout << "Reference Frequency (fR): 16.35 Hz\n";

    // Display speed of sound
    std::cout << "Speed of Sound: " << iSpeedOfSound << " m/s\n\n";

    // Note C#0
    double nu = 0;
    int k = 1;
    double frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: C#0, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    double wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    // Note D0
    nu = 0;
    k = 2;
    frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: D0, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    // Note D3
    nu = 3;
    k = 0;
    frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: D3, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    // Note C4
    nu = 4;
    k = 2;
    frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: C4, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    // Note D#7
    nu = 7;
    k = 3;
    frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: D#7, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    // Note C8
    nu = 8;
    k = 0;
    frequency = 16.35 * pow(dTwelfthRootOfTwo, nu) * pow(dTwelfthRootOfTwo, (1.0 / 12.0) * k);

    std::cout << "Note: C8, nu: " << nu << ", k: " << k << ", Frequency: " << frequency << " Hz\n";
    wavelength = iSpeedOfSound / frequency;
    std::cout << "Wavelength: " << wavelength << " meters (" << wavelength * 100 << " cm)\n\n";

    return 0;
}

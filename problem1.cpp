/* Design a signal distribution block with a single input and dual outputs */

#include <iostream>
#include <cmath>

// Function to simulate voltage divider
double voltageDivider(double Vin, double R1, double R2) {
    return Vin * R2 / (R1 + R2);
}

// Function to simulate a buffer amplifier (no gain, just pass-through)
double bufferAmplifier(double Vin) {
    return Vin; // Ideal buffer: signal is unchanged
}

int main() {
    // Input signal
    double Vin = 5.0; // Assume 5V input signal

    // Resistor values for voltage divider
    double R1 = 1000; // 1kΩ
    double R2 = 1000; // 1kΩ

    // Simulate the voltage divider for both outputs
    double Vout1 = voltageDivider(Vin, R1, R2);
    double Vout2 = voltageDivider(Vin, R1, R2);

    std::cout << "Input Signal: " << Vin << " V" << std::endl;
    std::cout << "Output 1: " << Vout1 << " V" << std::endl;
    std::cout << "Output 2: " << Vout2 << " V" << std::endl;

    // Simulate buffer amplifiers (assuming no signal loss)
    double bufferedOut1 = bufferAmplifier(Vout1);
    double bufferedOut2 = bufferAmplifier(Vout2);

    std::cout << "\nAfter buffering:" << std::endl;
    std::cout << "Buffered Output 1: " << bufferedOut1 << " V" << std::endl;
    std::cout << "Buffered Output 2: " << bufferedOut2 << " V" << std::endl;

    return 0;
}

#include <iostream>

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex(double real=0, double imag=0) : real(real), imag(imag) {}

        // Overload the + operator to add two complex numbers
        Complex operator+(const Complex &other) const {
            return Complex(real + other.real, imag + other.imag);
        }

        void print() const {
            std::cout << real << " + " << imag << "i" << std::endl;
        }
};

int main() {
    Complex a(1, 2), b(3, 4);
    Complex c = a + b;

    std::cout << "First complex number: ";
    a.print();
    std::cout << "Second complex number: ";
    b.print();
    std::cout << "Sum of the two numbers: ";
    c.print();

    return 0;
}

#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the surface area of a sphere
double calculateSphereSurfaceArea(double radius) {
    return 4.0 * PI * std::pow(radius, 2);
}

int main() {
    double radius;

    // Get the radius from the user
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Calculate and display the surface area of the sphere
    double sphereSurfaceArea = calculateSphereSurfaceArea(radius);

    std::cout << "Surface area of the sphere: " << sphereSurfaceArea << std::endl;

    return 0;
}

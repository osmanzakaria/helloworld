#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double base = 10.0;
    double height = 7.0;
    double hypotenuse = 12.0;

    // Calculate perimeter
    double perimeter = base + height + hypotenuse;

    // Calculate area
    double area = 0.5 * base * height;

    // Output results
    cout << "Perimeter: " << perimeter << endl;
    cout << "Area: " << area << endl;

    return 0;
}

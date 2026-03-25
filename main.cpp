#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) { # Circle
        cout << "Enter the radius: ";
        cin >> radius;
        area = PI * pow(radius, 2);
        cout << area << endl;
    } else if (choice == 2) { # Rectangle
        cout << "Enter length and width: ";
        cin >> width >> height;
        area = width * height;
        cout << area << endl;
    } else if (choice == 3) { # Triangle
        cout << "Enter base and height: ";
        cin >> base >> height;
        area = base * height * 0.5;
        cout << area << endl;
    } else if (choice == 4) { # Stopped
        cout << "Program Stopped" << endl;
    } else { # Other
        cout << "Wrong number" << endl;
    }

    cout << left << setprecision(2) << fixed;
    cout << "The area is " << area << endl;

    return 0;
}

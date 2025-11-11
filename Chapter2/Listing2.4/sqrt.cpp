// sqrt.cpp --using the () function
#include <iostream>
#include <cmath>            // or math.h

int main() {
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "Thats the equivalent of a square " << side
    << "feat to the side." << endl;
    cout << "How fascinating!" << endl;

    cout << "Rahmat  Taufik Aditiya 255440006";
    return 0;
}
#include <iostream>
using namespace std;

float areaOfCircle(float &radius) {
    return 3.14 * radius * radius;
}

int main() {
    float rad;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    float area = areaOfCircle(rad);
    cout << "Area of the circle is: " << area << endl;
    return 0;
}


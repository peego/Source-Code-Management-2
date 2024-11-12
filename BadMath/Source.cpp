// Nic Davis
// CIS 1202 501
// November 12, 2024

#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
    // Fix: Apply division to the sum of all three numbers
    return (i1 + i2 + i3) / 3.0f;
}

int main()
{
    int n1 = 0, n2 = 0, n3 = 0;
    cout << "This program calculates the average of three numbers." << endl;
    cout << "First number: ";
    cin >> n1;
    cout << "Second number: ";
    cin >> n2;
    cout << "Third number: ";
    cin >> n3;  // Fix: Changed n2 to n3

    float a = average(n1, n2, n3);

    // Improved output formatting
    cout << fixed << setprecision(2) << "The average is " << a << endl;

    return 0;
}

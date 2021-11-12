#include <iostream>
using namespace std;
int main()
{
    int a, r, b;
    const int pi = 3.14;
    cout << "Enter 1st Number (Bigger): ";
    cin >> a;
    cout << "Enter the second number (Smaller): ";
    cin >> b;
    cout << "\tProgram 1 : Aadition " << endl
         << endl;

    cout << "\tAddition = " << a + b << endl
         << endl;
    cout << "==========================================" << endl
         << endl;
    cout << "\tProgram 2 : Substraction " << endl
         << endl;
    cout << "\tSubstraction = " << a - b << endl
         << endl;
    cout << "==========================================" << endl
         << endl;
    cout << "\tProgram 3 : Multiplication " << endl
         << endl;
    cout << "\tMultiplication = " << a * b << endl
         << endl;
    cout << "==========================================" << endl
         << endl;
    cout << "\tProgram 4 : Division " << endl
         << endl;
    cout << "\tDivision = " << a / b << endl
         << endl;
    cout << "==========================================" << endl
         << endl;
    cout << "\tProgram 5 : Circumference of the Circle " << endl
         << endl;
    cout << "Enter the Radius : ";
    cin >> r;
    cout << "\tCircumference of the Circle = " << pi * r * r << endl
         << endl;
    cout << "==========================================" << endl
         << endl;
    cout << "\tprogram 6 : Type Casting " << endl
         << endl;
    char x = 'B';
    cout << "\tAddition B+10 = " << x + 10 << endl
         << endl;
    return 0;
}
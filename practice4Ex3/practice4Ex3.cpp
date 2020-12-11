// practice4Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ComplexNumbers.h"
using namespace std;
int main()
{
    double a, b,aj,bj;
    cout << "Input the first number REAL part: " << endl;
    cin >> a;

    cout << "Input the first number COMPLEX part: " << endl;
    cin >> aj;

    cout << "Input the second number REAL part: " << endl;
    cin >> b;

    cout << "Input the second number COMPLEX part: " << endl;
    cin >> bj;

    ComplexNumbers cmplx;
    cmplx.setTwoComplexNumbers(a, aj, b, bj);

    cout << "The result of the two complex numbers addition is: " << cmplx.addRealPart() << "+" << cmplx.addImaginaryPart() << "J " << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

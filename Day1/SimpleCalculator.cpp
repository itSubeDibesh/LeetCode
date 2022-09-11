#include <iostream>
using namespace std;

float input(char index)
{
    float number;
    cout << "Enter Number " << index << ":";
    cin >> number;
    return number;
}

int main()
{
    float numberA = input('A');
    float numberB = input('B');

    cout << numberA << " + " << numberB << " = " << numberA + numberB << endl;
    cout << numberA << " - " << numberB << " = " << numberA - numberB << endl;
    cout << numberA << " * " << numberB << " = " << numberA * numberB << endl;
    cout << numberA << " / " << numberB << " = " << numberA / numberB << endl;

    return 0;
}

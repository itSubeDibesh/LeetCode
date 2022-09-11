#include <iostream>
using namespace std;

float input(char index)
{
    float number;
    cout << "Enter Number " << index << " :";
    cin >> number;
    return number;
}

float calculate(float numberA, char condition, float numberB)
{
    switch (condition)
    {
    case '+':
        return numberA + numberB;
    case '-':
        return numberA - numberB;
    case '*':
        return numberA * numberB;
    case '/':
        return numberA / numberB;
    default:
        return 0;
    }
}

int main()
{
    float numberA = input('A');
    float numberB = input('B');
    char condition;
    cout << "Enter condition symbol : ";
    cin >> condition;
    cout << numberA << " " << condition << " " << numberB << " = "
         << calculate(numberA, condition, numberB) << endl;
    return 0;
}

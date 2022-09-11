// WAP to create following pattern

// Pattern A
// 1 * * *
// * 1 * *
// * * 1 *
// * * * 1

// Pattern B
// * * * 1
// * * 1 *
// * 1 * *
// 1 * * *

// Solution Pattern A

#include <iostream>

using namespace std;

int main()
{
    int
        row = 4,
        col = 4;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // cout << "*"<< " "; -> Grid

            // Pattern A
            if (i == j)
                cout << "*"
                     << " ";
            else
                cout << "0"
                     << " ";

            // Pattern B
            // if (row - 1 == col - 1)
            // {
            //     if (row - 1 == i + j)
            //         cout << "*"
            //              << " ";
            //     else
            //         cout << "0"
            //              << " ";
            // }
        }
        cout << endl;
    }
}
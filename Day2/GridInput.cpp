// WAP to input 2x2 grid and display of grid inverse the grid

// 1 2
// 3 4

// 1 3
// 2 4

#include <iostream>

using namespace std;

int input(int row, int col)
{
    int number;
    cout << "Enter the value of [" << row << "," << col << "]: ";
    cin >> number;
    return number;
}

int iterate(int rows, int column, int(callback))
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
        }
    }
}

int main()
{
    const int ROWS = 2, COLUMNS = 2;
    int GRID[ROWS][COLUMNS];
    int INVERSE[ROWS][COLUMNS];
    // Input 2x2 Grid
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            GRID[i][j] = input(i, j);
        }
    }

    // Print 2X2 Grid
    cout << endl
         << "Input Grid:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << GRID[i][j] << " ";
        }
        cout << endl;
    }

    // Transform 2X2 Grid
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            INVERSE[i][j] = GRID[j][i];
        }
    }

    // Print 2X2 Grid
    cout << endl
         << "Inverse Grid:" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << INVERSE[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

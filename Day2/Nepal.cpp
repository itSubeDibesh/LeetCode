// WAP to create structure flag of Nepal using work nepal.
// But here is the catch you have only 3 tries to solve
// the problem and you are expected with following result.

// N
// N E
// N E P
// N E P A
// N E P A L
// N
// N E
// N E P
// N E P A
// N E P A L

// You can use different loops to add flavour to your solution

#include <iostream>

using namespace std;

int main()
{
    string nepal = "NEPAL";
    // Initial Loop that makes sure the iteration goes twice
    int mainLoop = 0;
    do
    {
        // Second Loop to iterate for individual letters
        for (int secondLoop = 0; secondLoop < nepal.length(); secondLoop++)
        {
            // Third Loop
            for (int thirdLoop = 0; thirdLoop <= secondLoop; thirdLoop++)
            {
                cout << nepal[thirdLoop] << " ";
            }
            cout << endl;
        }
        mainLoop++;
    } while (mainLoop < 2);
    return 0;
}
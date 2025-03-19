#include <iostream>
using namespace std;

int main()
{
    int nilai[2][5] = {
        {3, 6, 8, 1, 9},
        {12, 13, 67, 16, 90}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

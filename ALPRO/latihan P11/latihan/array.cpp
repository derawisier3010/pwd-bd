#include <iostream>
using namespace std;

int main()
{
    int nilai[] = {3, 6, 8, 1, 9, 10, 15, 17};
    // for (int i = 0; i < size(nilai); i++)
    // {
    //     cout << nilai[i] << " ";
    // }

    for (int n : nilai)
    {
        cout << n << " ";
    }

    return 0;
}
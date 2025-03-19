#include <iostream>
using namespace std;

int kali(int a, int b)
{
    return a * b;
}

void tampil(int a, int b)
{
    cout << a << " x " << b << " = " << kali(a, b) << endl;
}

int main()
{
    for (int bil1 = 1; bil1 <= 10; bil1++)
    {
        for (int bil2 = 1; bil2 <= 10; bil2++)
        {
            tampil(bil1, bil2);
        }
    }
    return 0;
}
 
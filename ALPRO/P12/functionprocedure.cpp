#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int c, int d)
{
    return c - d;
}

void tampil(int a, int b)
{
    cout << " Penjumlahan " << a << " dan " << b << " adalah " << tambah(a, b) << endl;
    // cout << " Pengurangan " << a << " dan " << b << " adalah " << kurang(a, b);
}

int main()
{
    for (int bil1 = 1; bil1 <= 10; bil1++)
    {
        for (int bil2 = 10; bil2 >= 1; bil2--)
        {
            tampil(bil1, bil2);
        }
    }
    // int a = 2;
    // int b = 9;
    // tampil(a, b);
    // // cout << tambah(bil1, bil2);
}

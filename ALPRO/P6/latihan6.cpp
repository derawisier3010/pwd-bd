#include <iostream>
using namespace std;

int main()
{
    int bilangan;

    cout << "Masukan angka bilangan: ";
    cin >> bilangan;

    if (bilangan % 2 == 0)
    {
        cout << "Bilangan tersebut genap";
    }
    else
    {
        cout << bilangan << " Bilangan tersebut ganjil";
    }

    return 0;
}

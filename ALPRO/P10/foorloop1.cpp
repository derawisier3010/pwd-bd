#include <iostream>
using namespace std;

int main()
{
    int jml;
    int angka = 1;

    cout << "Menampilkan bilangan ganjil sesuai yang ditentukan" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Jumlah bilangan : ";
    cin >> jml;

    for (int i = 1; i <= jml; i++)
    {
        cout << angka << endl;
        angka += 2;
    }
}
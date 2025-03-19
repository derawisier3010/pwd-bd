#include <iostream>
using namespace std;

int main()
{

    int nilai[2][5] = {
        {3, 6, 8, 1, 9},
        {12, 13, 67, 16, 90}};

    int baris, kolom;

    cout << "Masukkan Index Baris (0-1): ";
    cin >> baris;

    cout << "Masukkan Index Kolom (0-4): ";
    cin >> kolom;

    if (baris >= 0 && baris < 2 && kolom >= 0 && kolom < 5)
    {

        cout << "Output: " << nilai[baris][kolom] << endl;
    }
    else
    {

        cout << "Index yang dimasukkan tidak valid!" << endl;
    }

    return 0;
}

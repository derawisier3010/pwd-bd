#include <iostream>
using namespace std;

void tampilNama()
{
    for (int baris = 1; baris <= 7; baris++)
    {
        for (int kolom = 1; kolom <= 40; kolom++)
        {

            if ((kolom == 1) || (kolom == 5 && baris >= 2 && baris <= 6) ||
                (kolom >= 2 && kolom <= 4 && (baris == 1 || baris == 7)))
            {
                cout << "*";
            }

            else if (kolom == 6 || kolom == 12)
            {
                cout << " ";
            }

            else if ((kolom == 8) || (baris == 1 && kolom >= 8 && kolom <= 12) ||
                     (baris == 4 && kolom >= 8 && kolom <= 11) || (baris == 7 && kolom >= 8 && kolom <= 12))
            {
                cout << "*";
            }

            else if (kolom == 13 || kolom == 17)
            {
                cout << " ";
            }

            else if ((kolom == 15) || (baris == 1 && kolom >= 15 && kolom <= 17) ||
                     (baris == 4 && kolom >= 15 && kolom <= 17) ||
                     (baris == 2 && kolom == 18) || (baris == 3 && kolom == 18) ||
                     (baris == 5 && kolom == 16) || (baris == 6 && kolom == 17) ||
                     (baris == 7 && kolom == 18))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    cout << "## Program Tampil Nama ##" << endl;
    cout << "================================" << endl;
    tampilNama();
    return 0;
}

#include <iostream>
using namespace std;

void dataTinggiSegitiga(int &tinggi)
{
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;
}

void bentukSegitiga(int tinggi)
{
    for (int i = 1; i <= tinggi; i++)
    {
        for (int j = i; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

int main()
{
    cout << "## Program C++ Segitiga Bintang ##" << endl;
    cout << endl;

    int tinggi_segitiga;
    dataTinggiSegitiga(tinggi_segitiga);
    cout << endl;

    bentukSegitiga(tinggi_segitiga);

    return 0;
}


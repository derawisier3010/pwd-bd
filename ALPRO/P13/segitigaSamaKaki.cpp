#include <iostream>
using namespace std;

void dataTinggiPohon(int &tinggi)
{
    cout << "Input tinggi pohon natal: ";
    cin >> tinggi;
}

void bentukPohonNatal(int tinggi)
{
    for (int i = 1; i <= tinggi; i++)
    {
        for (int spasi = 1; spasi <= tinggi - i; spasi++)
        {
            cout << " ";
        }
        for (int bintang = 1; bintang <= 2 * i - 1; bintang++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    cout << "## Program C++ Pohon Natal ##" << endl;
    cout << "=============================" << endl;
    cout << endl;

    int tinggi_pohon;

    dataTinggiPohon(tinggi_pohon);
    cout << endl;
    bentukPohonNatal(tinggi_pohon);
    return 0;
}

#include <iostream>
using namespace std;

void dataInput(string &inputNama, int &inputNilai)
{
    cout << "Masukan nama : ";
    cin >> inputNama;

    cout << "Masukan nilai : ";
    cin >> inputNilai;
}

string checkLulus(int nilai)
{
    if (nilai >= 75)
    {
        return "Lulus";
    }
    else
    {
        return "Tidak Lulus";
    }
}

int main()
{
    string nama;
    int nilai;

    dataInput(nama, nilai);
    cout << endl;
    cout << "Nama anda adalah: " << nama << endl;
    cout << "Nilai anda adalah: " << nilai << endl;
    cout << "Status: " << checkLulus(nilai) << endl;

    return 0;
}

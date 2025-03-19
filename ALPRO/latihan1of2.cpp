#include <iostream>
using namespace std;

int totalPenjualan = 0;

void tokoPertama()
{
    int penjualanTokoPertama = 200000;

    totalPenjualan += penjualanTokoPertama;
}

void tokoKedua()
{
    int penjualanTokoKedua = 500000;

    totalPenjualan += penjualanTokoKedua;
}




int main()
{
    tokoPertama();
    tokoKedua();

    cout << "Total penjualan kedua toko: " << totalPenjualan << endl;

    return 0;
}

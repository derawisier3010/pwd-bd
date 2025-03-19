#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t now = time (0);
    tm *ltm = localtime (&now);
    int month = 1 + ltm->tm_mon;
    int bulan = 14;
   

switch(bulan){
    case 1:
    cout << "Januari";
    break;

    case 2:
    cout << "Febuari";
    break;

    case 3:
    cout << "Maret";
    break;

    case 4:
    cout << "April";
    break;

    case 5:
    cout << "Mei";
    break;

    case 6:
    cout << "Juni";
    break;

    case 7:
    cout << "Juli";
    break;

    case 8:
    cout << "Agustus";
    break;

    case 9:
    cout << "September";
    break;

    case 10:
    cout << "Oktober";
    break;

    case 11:
    cout << "November";
    break;

    case 12:
    cout << "Desember";
    break;

    default:
    cout << "Bulan tidak valid";

}

    return 0;
}
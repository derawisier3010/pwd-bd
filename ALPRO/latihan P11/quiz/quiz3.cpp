#include <iostream>
using namespace std;

int main()
{
    

    int data[2][5] = {
        {3, 6, 8, 1, 9},
        {12, 13, 67, 16, 90}};

int baris;
   
    cout << "Masukkan index baris (0 atau 1): ";
    cin >> baris;

   for (int j=0; j<=4; j++){
    cout << data[baris][j] << " ";
   }
   cout << endl;

    return 0;
}

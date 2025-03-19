#include <iostream>
using namespace std;

int main (){
int c=1, n=1, sum=0;

while(c <=10){
    sum = sum + n;
    n = n + 2;
    c = c + 1;
cout << "Hasil Penjumlahan : " << sum << endl;
}
    return 0;
}
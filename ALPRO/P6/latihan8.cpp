#include <iostream>
using namespace std;

int main (){
    int a;
    int b;
    int c;

cout << "Masukan panjang sisi a: ";
cin >> a;

cout << "Masukan panjang sisi b: ";
cin >> b;

cout << "Masukan panjang sisi c: ";
cin >> c;

if (a <= 0 || b <= 0 || c <=0){
    cout << "Panjang sisi tidak valid";
}else if (a == b && b == c){
    cout << "Segitiga sama sisi";
}else if (a == b || b == c || a == c){
    cout << "Segitiga sama kaki";
}else{
    cout << "Segitiga sembarang";
}
    return 0;

}
#include <iostream>
using namespace std;

int main (){
string color; 

cout << "Masukan warna buah (merah, kuning, hijau): ";
cin >> color;

if (color == "merah"){
    cout << "Buah sudah matang";
}else if (color == "kuning"){
    cout << "Buah hampir matang;";
}else if(color == "hijau"){
cout << "Buah belum matang";
}else{
    cout << "warna tidak dikenali";
}

    return 0;
}
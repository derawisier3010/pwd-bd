#include <iostream>
using namespace std;

int main(){
float bmi;

cout << "Masukan nilai BMI Anda: ";
cin >> bmi;

if (bmi < 18.5){
    cout << "Anda Kekurangan Berat Badan";
}else if (bmi >= 18.5 && bmi < 24.9){
    cout << "Berat Badan Anda Normal";
}else if (bmi >= 25 && bmi < 29.9){
    cout << "Anda Kelebihan Berat Badan";
}else{
    cout << "Obesitas";
}


    return 0;
}
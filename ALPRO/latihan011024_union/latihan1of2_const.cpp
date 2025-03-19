#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14159;
    double radius;
    cout << "Masukan Jari-jari lingkaran: ";
    cin >> radius;

    double luas = pi * radius * radius;
    cout << "Luas lingkaran: " << luas << endl;

    return 0;
}
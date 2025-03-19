#include <iostream>
#define PI 3.14159
using namespace std;

int main()
{
    double radius;
    cout << "Masukan jari-jari lingkaran: ";
    cin >> radius;

    double luas = PI * radius * radius;
    cout << "Luas lingkaran: " << luas << endl;

    return 0;
}


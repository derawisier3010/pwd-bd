#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p;
    p = &a;
    *p =20;

    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    cout << "Nilai p (alamat a): " << p << endl;
    cout << "Nilai yang ditunjukan oleh p: " << *p << endl;

    return 0;
}
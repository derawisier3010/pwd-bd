#include <iostream>
using namespace std;

bool isVokal(char huruf)

{

    if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o')

    {

        return true;
    }

    else

    {

        return false;
    }
}

int main()

{

    char h;

    cout << "Masukkan huruf : ";

    cin >> h;

    if (isVokal(h))

    {

        cout << h << " adalah huruf vokal";
    }

    else

    {

        cout << h << " bukan huruf vokal";
    }
}
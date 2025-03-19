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

void HitungVokal(int &Count)
{
    string kata;
    Count = 0;

    cout << "Masukan kata: ";
    cin >> kata;

    for (int i = 0; i < size(kata); i++)
    {
        if (isVokal(kata[i]))
        {
            Count++;
        }
    }
}

int main()
{
    int Count;
    HitungVokal(Count);

    cout << "Jumlah karakter vokal yang dimasukan adalah: " << Count << endl;
}
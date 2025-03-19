#include <iostream>
using namespace std;

bool isVokal(char huruf)
{
    if (huruf == 'a' || huruf == 'i' || huruf == 'e' || huruf == 'o')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void HitungVokal(int N, int &Count)
{
    string kata;
    Count = 0;
    cout << "Masukan character sebanyak " << N << ": ";
    cin >> kata;

    for (int i = 0; i < N; i++)
    {
        if (isVokal(kata[i]))
        {
            Count++;
        }
    }
}
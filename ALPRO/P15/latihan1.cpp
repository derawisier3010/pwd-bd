#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    if (number >= 0 && number <= 9)
        return number;

    return (number % 10) + sumOfDigits(number / 10);
}

int main()
{
    int n;
    cout << "Masukan angka: ";
    cin >> n;

    int sum_digits = sumOfDigits(n);
    cout << "Jumlah digit dari " << n << " adalah: " << sum_digits << endl;
    return 0;
}
#include <iostream> 
using namespace std;

void printNumbers(int n) 
{
    if (n < 1) {
        return;
    }

    cout << n << " ";
    printNumbers (n-1);
}

int main () 
{
    printNumbers (6);
    return 0;
}



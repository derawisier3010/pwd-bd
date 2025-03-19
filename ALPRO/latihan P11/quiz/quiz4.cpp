#include <iostream>
using namespace std;
int main()
{

    int nilai[10];
    int data[] = {2, 5, 6, 7, 11, 19, 44, 55, 78, 88};

    for (int i = 0; i < 10; i++)
    {
        nilai[i] = data[i];
    }

    cout << " " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "nilai[" << i << "] adalah " << nilai[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

union MyUnion
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    MyUnion u;

    u.intValue = 20;
    cout << "Nilai intValue adalah: " << u.intValue << endl;

    u.floatValue = 10.55;
    cout << "Nilai floatValue adalah: " << u.floatValue << endl;

    u.charValue = 'U';
    cout << "Nilai charValue adalah: " << u.charValue << endl;

    return 0;
}

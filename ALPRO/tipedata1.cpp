#include <iostream>
#include <string> 
using namespace std;
int main() {
    
    int num;
    float decimal;
    char letter;
    string word;

    
    cout << "Ukuran int: " << sizeof(num) << " bytes\n";
    cout << "Ukuran float: " << sizeof(decimal) << " bytes\n";
    cout << "Ukuran char: " << sizeof(letter) << " bytes\n";
    cout << "Ukuran string: " << sizeof(word) << " bytes\n";

    return 0; 
}


#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[] = "i am going out";
    cout << "Original string: " << str;
    
    cout << endl << "String after reverse: ";
    
    for(int i = (strlen(str) - 1); i >= 0; i--)
        cout << str[i];
        
    return 0;
}

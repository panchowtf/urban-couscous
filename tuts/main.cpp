#include <iostream>
 
int main()
{
    using namespace std;
    cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
    cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
    cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
    cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
    cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
    cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
    cout << "long long:\t" << sizeof(long long) << " bytes" << endl; // C++11, may not be supported by your compiler
    cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
    cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
    cout << "long double:\t" << sizeof(long double) << " bytes" << endl;

    unsigned short x = 65535; // largest 16-bit unsigned value possible
    cout << "x was: " << x << endl;
    x = x + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
    cout << "x is now: " << x << endl;

    
    return 0;
}

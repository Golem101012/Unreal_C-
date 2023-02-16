

#include <iostream>
#include "Header.h" // Пр р 13.4


using namespace std;

int main()
{
    // Пр р 13.4

    int x = 2, y = 3, z = 0;
    z = Qutro(x, y);

    cout << "Pr r 13.4\n";
    cout << "x=2 y=3\n";
    cout << "x^2+2xy+y^2=" << z << "\n";

    //Пр р 14.4

    string str = "Hello World!";
    char str1;
    cout << "Pr r 14.4\n";
    cout << str << "\n";
    cout << str.length() << "\n";
    str1 = str[0];
    cout << str1 << "\n";
    str1 = str[str.length() - 1];
    cout << str1 << "\n";


}


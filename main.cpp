#include <iostream>
#include "sir.cpp"

using namespace std;

int main()
{
    Sir s1("string 1");    //contructor cu parametru

    cout << s1 << endl;    // supraincarcare <<

    Sir s2;                //constructor fara parametru

    cin >> s2;             // supraincarcare >>

    cout << s2 << endl;

    Sir s3;
    s3.Set("a");           // Setarea sirului + un singur caracter (char) poate fi vazut ca un string de un element
    cout << s3 <<endl;

    Sir s4("abcd"), s5("abcd");
    cout << s4 << " == " << s5 << ": " << (s4 == s5) << endl;   //supraincarcare ==

    s4 = s3;              // supraincarcare =

    cout << s4 << " == " << s5 << ": " << (s4 == s5) << endl;

    cout << s4 << " > " << s5 << ": " << (s4 > s5) << endl;    // supraincarcare >
    s4.Set("sabc");
    cout << s4 << " > " << s5 << ": " << (s4 > s5) << endl;

    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;    // supraincarcare <
    s4.Set("aaa");
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    s5.Set("aaab");
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;

    Sir s6(s4);              // constructor de copiere

    cout << s5 + s6 << endl; // supraincarcare +
    Sir s7 = s2 + s6;

    cout << s7[2] << endl;           // supraincarcare []

    cout << s7.Len() << " caractere (" << s7 << ')';        // obtinerea numarului de caractere
    return 0;
}

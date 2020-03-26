#include <iostream>
#include "sir.cpp"

using namespace std;

int main()
{
    sir s("1234");
    s.afisare();
    sir s1(s);
    s1.afisare();
    return 0;
}

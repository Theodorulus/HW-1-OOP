#include <iostream>
#include "sir.h"

using namespace std;

void sir::afisare()
{
    cout << s << endl;
}

sir::sir(const sir &str)
{
    int nr, i;
    for(nr = 0; str.s[nr] != NULL; nr++); // len(str)
    /*try
    {*/
        s = new char[nr];
	/*}
	catch (bad_alloc xa)
	{
	   cout << "Allocation Failure\n";
	   exit(EXIT_FAILURE);
	}*/
    for(i = 0; i < nr; i++)
        s[i] = str.s[i];
}

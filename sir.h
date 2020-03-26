#ifndef SIR_H_INCLUDED
#define SIR_H_INCLUDED

using namespace std;

class sir{
    char *s;
public:
    sir();
    sir(char*);
    sir(const sir &str);


    void afisare();
};

inline sir::sir ()
{
    /*try
    {*/
        s = new char[1];
	/*}
	catch (bad_alloc xa)
	{
	   cout << "Allocation Failure\n";
	   exit(EXIT_FAILURE);
	}*/
}

inline sir::sir(char *str)
{
    int nr, i;
    for(nr = 0; str[nr] != NULL; nr++); // len(str)
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
        s[i] = str[i];
}

#endif // SIR_H_INCLUDED

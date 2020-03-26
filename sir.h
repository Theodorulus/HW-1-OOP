#ifndef SIR_H_INCLUDED
#define SIR_H_INCLUDED

class sir{
    char *s;
public:
    sir();
    sir(char*);
    void afisare();
};

inline sir::sir ()
{
    s = new char[1];
}

inline sir::sir(char *str)
{
    int nr, i;
    for(nr = 0; str[nr] != NULL; nr++); // len(str)
    s = new char[i];
    for(i = 0; i < nr; i++)
        s[i] = str[i];
}

#endif // SIR_H_INCLUDED

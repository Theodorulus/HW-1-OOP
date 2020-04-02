#include <iostream>
#include "sir.h"

using namespace std;

Sir::Sir ()
{
    s = new char[1];
    s[0] = '\0';
}

Sir::Sir(char *str)
{
    int nr, i;
    for(nr = 0; str[nr] != '\0'; nr++); // len(str)
    s = new char[nr + 1]; // nr + 1 ca sa las un caracter liber pentru linistea mea
    for(i = 0; i < nr; i++)
        s[i] = str[i];
    s[nr] = '\0';
}

Sir::Sir(const Sir& str)
{
    int nr, i;
    for(nr = 0; str.s[nr] != '\0'; nr++);
    s = new char[nr+1];
    for(i = 0; i < nr; i++)
        s[i] = str.s[i];
    s[nr] = '\0';
}

Sir::~Sir()
{
    delete[] s;
}

int Sir::Len() const
{
    int nr;
    for(nr = 0; s[nr] != '\0'; nr++);
    return nr;
}

void Sir::Set(char* str)
{
    delete[] s;
    int i;
    int nr;
    for(nr = 0; str[nr] != '\0'; nr++);
    s = new char[nr + 1];
    for(int i = 0; i <= nr; i++)
        s[i] = str[i];
}

bool Sir::operator ==(const Sir& sir)
{
    if(Len() != sir.Len())
        return 0;
    else
    {
        int n = Len();
        for(int i = 0; i < n; i++)
            if(s[i] != sir.s[i])
                return 0;
    }
    return 1;
}

Sir& Sir::operator +(const Sir& str)
{
    int n1 = Len();
    int n2 = str.Len();
    for(int i = n1 ; i <= n1 + n2; i++)
        s[i] = str.s[i-n1];
    return *this;
}

char Sir::operator [](int i)
{
    if(i < Len())
        return s[i];
}

bool Sir::operator >(const Sir& str)
{
    int n1 = Len();
    int n2 = str.Len();
    int n;
    if (n1 < n2)
        n = n1;
    else
        n = n2;
    for(int i = 0 ;i < n; i++)
        if(s[i] < str.s[i])
            return 0;
        else
            if(s[i] > str.s[i])
                return 1;
    //daca primele n cractere ale celor 2 string-uri sunt egale, atunci string-ul mai mare este cel cu lungimea mai mare
    if (n1 != n2)
        if(n == n1)
            return 0;
        else
            return 1;
    else
        return 0;
}

bool Sir::operator <(const Sir& str)
{
    int n1 = Len();
    int n2 = str.Len();
    int n;
    if (n1 < n2)
        n = n1;
    else
        n = n2;
    for(int i = 0 ;i < n; i++)
        if(s[i] > str.s[i])
            return 0;
        else
            if(s[i] < str.s[i])
                return 1;
    //daca primele n cractere ale celor 2 string-uri sunt egale, atunci string-ul mai mic este cel cu lungimea mai mica
    if (n1 != n2)
        if(n == n1)
            return 1;
        else
            return 0;
    else
        return 0;
}

Sir& Sir::operator=(const Sir& str)
{

    if(&str != this)
    {
        delete[] this->s;
        this->s = new char[str.Len()];
        this->Set(str.s);
    }
    return *this;
}

ostream& operator<<(ostream& out, const Sir& str)
{
    out << str.s;
    return out;
}

istream& operator>>(istream& in, Sir& str)
{
    in>>str.s;
    return in;
}

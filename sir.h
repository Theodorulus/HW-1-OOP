#ifndef SIR_H_INCLUDED
#define SIR_H_INCLUDED

using namespace std;

class Sir{
    char *s;
    void clear();
public:
    Sir();
    Sir(char*);
    Sir(const Sir&);
    ~Sir();
    Sir& operator =(const Sir&);
    bool operator ==(const Sir&);
    Sir& operator +(const Sir&);
    char operator [](int i);
    bool operator >(const Sir&);
    bool operator <(const Sir&);

    friend ostream& operator<<(ostream& out, const Sir&);
    friend istream& operator>>(istream& in, Sir&);

    int Len() const;
    void Set (char*);
};


#endif // SIR_H_INCLUDED

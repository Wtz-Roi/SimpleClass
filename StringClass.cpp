#include<iostream>
#include<string.h>
using namespace std;

class Mystring{
public:
    Mystring(const char *ptr=NULL);
    ~Mystring();
    Mystring(const Mystring &src);
    Mystring& operator=(const Mystring &src);
    char* get_str();
private:
    char* mp_str;
};

Mystring::Mystring(const char *ptr=NULL)
{
    if(ptr==NULL)
    {
        mp_str=new char[1];
        *mp_str=0;
    }
    else
    {
        mp_str=new char[strlen(ptr)+1];
        strcpy(mp_str,ptr);
    }
    
}
Mystring::~Mystring()
{
    delete[]mp_str;
    mp_str=NULL;
}
Mystring::Mystring(const Mystring &src)
{
    mp_str=new char[strlen(src.mp_str)+1];
    strcpy(mp_str,src.mp_str);
}
 Mystring& Mystring:: operator=(const Mystring &src)
{
    if(this==&src)
    {
        return *this;
    }
    delete[]mp_str;
    mp_str=new char[strlen(src.mp_str+1)];
    strcpy(mp_str,src.mp_str);
    return *this;
}
char* Mystring::get_str()
{
    return mp_str;
}
int main()
{
    Mystring str;
    Mystring str1("abcd");
    return 0;
}
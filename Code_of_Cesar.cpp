#include <iostream>
#include <string>

using namespace std;

string tekst;
int dlugosc;

int main()
{
    while (getline(cin,tekst))
    {
    dlugosc=tekst.length();

    for(int i=0;i<dlugosc;i++)
    {
        if (tekst[i]=='Z') {cout<<"C";}
        if (tekst[i]=='Y') {cout<<"B";}
        if (tekst[i]=='X') {cout<<"A";}
        if (tekst[i]==char(32)) {cout<<char(32);}
        if ((tekst[i]>='A')&&(tekst[i]<'X')) {cout<<char(tekst[i]+3);}
    }
    cout<<endl;
    }
    return 0;
}

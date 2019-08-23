#include <iostream>

using namespace std;

int stos[10];

int main()
{
    char polecenie;
    int liczba;
    int index=-1;

    while(cin>>polecenie)
    {
        if(polecenie=='+' && index<9)
        {
            index++;
            cin>>stos[index];
            cout<<":)"<<endl;
        }
        else if(polecenie=='-' && index>=0)
        {
            cout<<stos[index]<<endl;
            index--;
        }
        else
        {
            if(polecenie=='+') cin>>liczba;
            cout<<":("<<endl;
        }
    }
    return 0;
}

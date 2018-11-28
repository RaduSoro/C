#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    long numar;
    long numar_invers;
    long numar_salvat;
    cout<<"Introdu un numar: ";cin>>numar;
    numar_salvat=numar;
    while(numar>0){
        numar_invers=numar_invers*10+numar%10;
    }
    if(numar_salvat=numar_invers){
        cout<<"Nr este palindrom!";

    }
 //   else
        cout<<"Numarul nu este palindrom";
    getch();
}

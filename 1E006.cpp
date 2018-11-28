#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Conversii explicite.Se citeste un caracter a.Sa se afiseza codul sau ASCOO.Se citeste un nr din interval*/
int main(){
    char a;
    cout<<"a= ";
    cin>>a;
    cout<<a<<" are codul ASCII "<<(int)a<<'\n';
    int c;
    cout<<"C= ";
    cin>>c;
    cout<<" caracterul in codul ASCII "<<c<<" este "<<(char)c;
    return 0;
}

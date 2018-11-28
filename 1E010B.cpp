#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c,aux;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    if (a>b){aux=a;a=b;b=aux;}
    if (a>c){aux=a;a=c;c=aux;}
    if (b>c){aux=b;b=c;c=aux;}
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}

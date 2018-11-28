#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc 3 nr intregi.Sa se afiseze cel mai mare dintre ele*/
int main(){
    int a,b,c;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    if (a>=b && a>=c)cout<<a;
        if (b>=a && b>=c)cout<<b;
            if (c>=b && c>=a)cout<<c;
            return 0;
}


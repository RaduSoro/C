#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc doua nr intregi a si b.Daca a divide pe b sau b divide pe a atunci sa se afiseze catul impartirii celui mai mare
la cel mai mic,iar rezultatul impartiitii celui mai mare la cel mai mic.*/
int main(){
    int a,b;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    if(a%b==0 || b%a==0)
        if (a>b)cout<<a/b;
    else cout<<b/a;
    else if (a>b)cout<<a%b;
    else cout<<b%a;
    return 0;
}

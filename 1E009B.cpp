#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc 3 nr intregi.Sa se afiseze cel mai mare dintre ele*/
int main(){
    int a,b,c,max;
   cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    max=a;
    if(b>max)max=b;
    if(c>max)max=c;
    cout<<(max);


            return 0;
}


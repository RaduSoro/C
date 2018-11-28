#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc nr naturale pana cand se introduce 0 sa se afiseze media aritmetica a numerelor introduse.*/
int main(){
int x,s,n;
float m;
s=0;n=0;
cout<<"x= ";cin>>x;
while(x!=0)
{
    s=s+x;
    n++;
    cout<<"x=";cin>>x;
}
m=(float)s/n;
cout<<m;
}


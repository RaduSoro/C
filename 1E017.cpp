#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citeste un nr natural k.Gasiti toate perechile de numere x si y cu propietatea ca x*x-y*y=k*/
int main(){
    int k,a,b,x,y;
    cout<<"k= ";cin>>k;
    for(a=1;a<=k;a++)
        for(b=a+1;b<=k;b++)
        if(k%a==0 && k%b==0)
    {
        x=(a+b)/2;
        y=(b-a)/2;
        if(x*x-y*y==k)
        cout<<x<<" "<<y<<endl;
        return 0;
    }}

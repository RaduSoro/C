#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Afiseaza toate nr naturale de forma abba care sunt divizibile cu un nr natural n citit de la tastatura*/
int main(){
    int n,a,x;
    cout<<"n= ";cin>>n;
    for(a=10;a<=99;a++)
    {
        x= (a*10+a)*10+a/10;
        if(x%n==0)cout<<x<<" ";
    }return 0;
    }

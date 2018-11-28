#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citesc 3 nr naturale n,a si b.Afisati primele n puteri ale lui 2 din intervalul [a,b] Daca nu exista cel putin n puteri ale
lui 2 in interval atunci se vor afisa celor 2 care exista*/
int main(){
    int a,b,n,p,k;
    cin>>n>>a>>b;
    k=0;
    p=1;
    while(p<=b&&k<n)
    {
        if(p>=a){cout<<p<<" ";
        k++;}p=p*2;

    }return 0;}

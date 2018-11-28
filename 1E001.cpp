#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citste un nr natural n cu cel mult 4 cifre.
Sa se afiseze in ordine crescatoare toate numerele naturale pare atat timp cat suma lor nu depaseste n.*/
int main(){
int x,n,s;
cout<<"Inserati n: ";cin>>n ;
x=2;
s=2;
while(s<=n)
{
    cout<<x<<" " ;
    x=x+2;
    s=s+x;
    getch();
}}


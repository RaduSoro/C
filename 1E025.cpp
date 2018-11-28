#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste un nr natural n,Sa se afiseze n  triunghiuri ca in exemplu*/
int main(){
    int i,n,l,c;
    cin>>n;
    for(i=1;i<=n;i++)
        for(l=1;l<=i;l++)
    {
        for (c=1;c<=l;c++)
            cout<<i;
        cout<<endl;
    }return 0;}

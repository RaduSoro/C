#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citeste un nr natural n impar.Sa se afiseze primele n perechi de nr consecutive a caror nr consecutiv e divizibila cu 3*/
int main(){
    int n,x=1,k=0;
    cout<<"Inserati n: ";
    cin>>n;
 do{
        if((x+x+1)%n==0)
                cout<<x<<" "<<x+1<<endl;
 x=x+1;

         k++;}
         while (k<n);
        x=x+1;
        getch();}

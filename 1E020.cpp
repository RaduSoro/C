#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Pt un nr natural n citit de la tastatura sa se afiseze n*n nr*/
int main(){
    int n,i,j;
    cout<<"n= "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)cout<<i+j-1<<" ";
        cout<<endl;
        return 0;}}

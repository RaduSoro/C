#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int c,a[100],n,i,x,g;
cin>>n;
for(i=1;i<=n;i++)
    cin>>a[i];
for(c=1;c<=9;c++){
    g=0;
    (i=1;i<=n;i++)
    {
        x=a[i];
        while (x>9)x=x/10;
        if(x==c){cout<<a[i]<<" ";
        g=1}}
    }if (g==1)cout endl;}

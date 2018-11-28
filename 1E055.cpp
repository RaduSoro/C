#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n,f[10],i,j;
     for (i=1;i<=9;i++)f[i]=0;
    cin>>n;
    while(n>0)
    {
        f[n%10]++;
        n=n/10;}
    i=1;
    while(f[i]==0)i++;
    n=i;
    f[i]--;
    for (i=1;i<=9;i++)
    for(kj=1;j<=f[i];j++)
        n=n*10+i;
    cout<<n;
    return 0;}

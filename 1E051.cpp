#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int a[100],b[100],c[100],n,m,i,j,k,gasit;
    cout <<"n= ";cin >>n;
    cout<<"multimea a: ";
    for(i=1;i<=n;i++)cin>>a[i];
    cout<<"m= ";cin>>m;
    cout<<"multimea b:";
    for(i=1;i<=m;i++)cin>>b[i];
    k=0;
    for(i=1;i<=n;i++)
    {
        gasit=0;
        for(j=1;j<=m;j++)if(a[i]==b[j])gasit=1;
        if (gasit==1)
        {
            k++;
            c[k]=a[i];
        }
    }cout<<"intersectia";
    for(i=1;i<=k;i++)cout<<c[i]<<" ";
    return 0;}

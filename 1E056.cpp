#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int a[100],n,i,j,aux,p;
    cout<<"n= ";cin>>n;
    for (i=1;i<=n;i++)cin>>a[i];
    for (i=1;i<=n;i++)
    for (j=1;j<=n;j++)
    if(a[i]>a[j]){
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;
    }p=1;
    for (i=1;i<=n;i++)
        if (a[i]!=1) p=0;
    if(p==1)cout<<"da";
    else cout<<"nu";
    return 0;}

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int a[100],n,i,j,aux;
    cout<<"n= ";cin>>n;
    for (i=1;i<=n;i++)cin>>a[i];
    for (i=1;i<=n;i++)
    for (j=i+1;j<=n;j++)
    if(a[i]>a[j])
    {
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;
    }
    if(a[1]==0)
    {
        i=1;
        while(a[i]==0)i++;
        a[1]=a[i];
        a[i]=0;
    }
    for (i=1;i<=n;i++) cout<<a[i];
    return 0;}

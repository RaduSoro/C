#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int a[100],n,i,j;
    cout<<"n= ";cin>>n;
    for (i=1;i<=n;i++)cin>>a[i];
    for (i=1;i<=n;i++)
    if(a[i]==a[i+1]){
        for(j=1;j<=n;j++)
            a[j]=a[j+2];
        n=n-2;
        i--;
        if(i>=1;i--;
    }
    for (i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;}

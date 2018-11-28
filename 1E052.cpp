#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){ int a[100],i,j,n;
cin>>n;
for(i=1;i<=n;i++)cin>>a[i];
for(i=1;i<=n;i++)
    if(a[i]<=a[i-1])
{
    for(j=1;j<n;j++)
        a[j]=a[j+1];
    n--;
    i--;}
    for(i=1;i<=n;i++)cout<<a[i]<<" ";return 0;}


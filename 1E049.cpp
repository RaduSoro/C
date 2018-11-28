#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int a[100],n,i,x,k;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    x=a[i];
    for(i=1;i<=n;i++)
        if(a[i]==x)
    {
        for(k=i;
        k<n;k++)
            a[k]=a[k+1];
        n--;
        i--;
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;}

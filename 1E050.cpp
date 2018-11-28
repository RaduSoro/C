#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int a[100],n,i,k,j;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
        for(i=1;i<=n;i++)
            for(j=i+1;j<=n;j++)
            if(a[i]==a[j])
        {
            for(j=j;k<n;k++)
                a[k]=a[k+1];
            n--;
            j--;}
            for(i=1;i<=n;i++)cout<<a[i]<<" ";
            return 0;}



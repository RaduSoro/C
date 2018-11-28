#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
    int n,m,a[1000],b[1000],s[1000],p,i,t,c;
    cout<<"n= ";cin>>n;
    cout<<"a= ";
    for (i=n;i>=1;i--)cin>>a[i];
    cout<<"m= ";cin>>m;
    cout<<"b= ";
    (i=m;i>=1;i--) cin>> b[i];
    if(n<m){
            p=m;
    for (i=n+1;i<=m;i++)
        a[i]=0
    }else{p=n;
    for(i=m+1;i<=n;i++)b[i]=0;}
    f=0;
    for(i=1;i<=p;i++){
    c=a[i]+b[i]+t;
    s[i]=c%10;
    t=c/10;}
        if (t==1){p++;
        s[p]=t;}
        for(i=p;i>=1;i--)cout<<s[i];
        return 0;}

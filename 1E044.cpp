#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int a[100],b[100],m,n,i,j,gasit,ok=1;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)cin>>b[i];
    for(i=1;i<=n;i++)
    {
        gasit=0;
        for(j=1;j<=m;j++) if(a[i]==b[j])gasit=1;
        if(!gasit)ok=0;}
        if(ok)cout<<"da";
        else cout<<"nu";
        return 0;
        getch();}




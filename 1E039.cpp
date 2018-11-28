#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int n,i,j,s1=0,s2=0,a[10][10];
ifstream f("mp.in");
int main(){
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1,j<=n;j++)
        f>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        if(i>j) s1=s1+a[i][j];
    else if(j>i)s2=s2+a[i][j];
    while (s1!=s2)
        if(s1>s2)s1=s1-s2;
    else s2=s2-s1;
    cout<<s1;
    getch();
    return 0;}

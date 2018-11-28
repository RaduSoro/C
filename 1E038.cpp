#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int n,m,i,j,k,aux,a[10][10];
ifstream f("m.in");
int main(){
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
    for(k=1;k<=n;k++)
    {
        for(j=1;j<=m;j++)
            a[n+1][j]=a[1][j];
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            a[i][j]=a[i+1][j];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cout<<a[i][j]<<" ";

        }cout<<endl;
    }getch();
    return 0;}

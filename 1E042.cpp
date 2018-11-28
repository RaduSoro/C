#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int n,m,i,j,l,c,maxx=0,emax,a[10][10],k;
ifstream f("1E042.in");
int main(){
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        f>>a[i][j];
        for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        k=0;
        for(l=1;l<=n;l++)
            for(c=1;c<=m;c++)
            if(a[i][j]==a[l][c])k++;
        if(k>maxx){maxx=k;
            emax=a[i][j];}}
            cout<<emax<<" "<<maxx;
            getch();
            return 0;}

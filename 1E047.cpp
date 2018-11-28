#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
ifstream fin("1E047.in");
int main(){
    int a[10][10],i,j,l,c,m,n,p=1;
    fin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        fin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            for(l=1;l<=n;l++)
            for(c=1;c<=m;c++)
            if(i!=l&&j!=c&&a[i][j]==a[l][c])p=0;
        if(p)cout<<"da";
        else cout<<"nu";
        fin.close();
        return 0;
        getch();}

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
    for(i=2;i<=n;i=i+2)
        for(j=1;j<m;j++)
        for(k=j+1;k<=m;k++)
    if(a[i][j]>a[i][k] && a[i] [j]%2==0 && a[i][k]%2==0){
        aux=a[i][j];
        a[i][j]=a[i][k];
        a[i][k]=aux;}
        for(i=1;i<=n;i++){
            cout<<a[i][j]<<" ";
            cout<<endl;}
            f.close();
            getch();
            return 0;}

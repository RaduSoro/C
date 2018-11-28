#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
ifstream fin ("1E046.in");
int main(){
    int a[10],b[10],i,j,m,n;
    fin>>n,m;
    for(i=1;i<=n;i++)fin>>a[i];
        for(j=1;j<=m;j++)fin>>b[j];
        for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cout<<"("<<a[i]<<","<<b[j]<<")";
        fin.close();
        getch();
        return 0;}

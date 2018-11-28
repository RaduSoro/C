#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int n,i,j,s=0,a[10][10];
ifstream f("mp.in");
int main(){
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        f>>a[i][j];
    for(i=1;i<=n;i++)
        s=s+a[i-j][i]+a[i][i-j];
    cout<<s;
    getch();
    return 0;}

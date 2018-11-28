#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int n,i,j,c,l,s1=0,s2=0,a[10][10];
ifstream f("mp.in");
int main(){
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    f>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
    {s1=0;
        for(c=1;c<=n;c++) s1=s1+a[i][c];
        s2=0;
            for(l-1;l<=n;l++)s2=s2+a[l][j];
            if(s1==s2)cout<<a[i][j]<<" ";

    }getch();
    return 0;
}

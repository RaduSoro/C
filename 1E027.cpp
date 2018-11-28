#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se aplica o matrice cu n linii si n coloane avand ca elemente nr naturale sa se inlocuiesca fiecare l din matrice
 cu nr de divizori*/
 int a[20][20],n,m,i,j,d,nr;
int main(){
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        cin>>a[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
    {
        nr=0;
        for(d=1;d<=a[i][j];d++)
            if(a[i][j]%d==0)nr++;
        a[i][j]=nr;}
        {
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=m;j++)
                    cout<<a[i][j]<<" ";
                cout<<endl;
            }
            getch();
            return 0;}}




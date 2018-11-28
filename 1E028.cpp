#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
/* Se citeste un nr natural n de maxim 4 cifre.sa se scrie in */
//int a[15000]
ofstream f("2 la 100 out");
int main(){
    int a[15000],n,p=1,c;
    //int n,p=1;c;
    a[1]=1;
    cin>>n;
    int t,j;
    for(int i=1;i<=n;i++)
    {
        t=0;
        for(j=1;j<=p;j++)
        {
            c=a[j];
            a[j]=(c*2+t)%10;
            t=c*2/10;
        }
        {
            p++;
            a[p]=1;
        }
        for(int k=p;k>=1;k--)f<<a[k];
        f<<endl;

    }
    f.close();
    getch();
    return 0;}

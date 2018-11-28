#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
 ifstream fin ("1E035.in");
          ofstream fout("1E035.out");
int main(){
    int v[100],n,u[100],w[200],m,p,i,j,ok;
    fin>>m;
    for(i=0;i<m;i++) fin>>u[i];
    fin>>n;
    for(i=0;i<m;i++)fin>>v[i];
    for(i=0;i<m;i++)w[i]=u[i];
    p=m;
    for(i=0;i<n;i++)
    {
        ok=1;
        for(j=0;j<m;j++)
            if(v[i]==u[j]) ok=0;
        if(ok){w[p]=v[i];p++;
        }}
        for(i=0;i<p;i++)
            fout<<w[i]<<" ";
          fin.close();
    fout.close();
    return 0;
    }

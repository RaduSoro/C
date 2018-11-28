#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
 ifstream fin ("kin.txt");
          ofstream fout("k.out");
int main(){
    int v[100],n,x[100],y[100],m,p,i;
    fin>>n;
    for(i=0;i<n;i++) fin>>v[i];
    m=0;p=0;
    for(i=0;i<n;i++)
    if(v[i]%2==0){x[m]=v[i];
        m++;
    }
    else{y[p]=v[i];
    p++;}
    for(i=0;i<m;i++)fout<<x[i]<<" ";
    fout<<endl;
    for(i=1;i<p;i++)fout<<y[i]<<" ";
    fin.close();
    fout.close();
    return 0;
}

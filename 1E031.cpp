#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
      ifstream fin ("1E031.in");
ofstream fout("1E031.out");
int main(){
    int v[100],n,ok,d;
    fin>>n;
    for(int i=0;i<n;i++)fin>>v[i];
    for(int i=0;i<n;i++){
        ok=1;
        if(v[i]==0 || v[i==1])ok=0;
        else for(d=2;d<v[i];d++)
            if(v[i]%d==0) ok=0;
    }
    fin.close();
    fout.close();
    getch();
    return 0;
}

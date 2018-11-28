#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
 ifstream fin ("1E033.in");
          ofstream fout("1E033.out");
int main(){
    int v[100],n,max=-9999;
    fin>>n;
    for(int i=0;i<n;i++)fin>>v[i];
    for(int i=0;i<n;i++)
        if(v[i]%2==0)
        if(v[i]>max) max=v[i];
    fout<<max;
    fin.close();
    fout.close();
    return 0;
}

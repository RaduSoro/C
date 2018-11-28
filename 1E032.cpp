#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
   ifstream fin ("1E032.in");
          ofstream fout("1E032.out");
int main(){
          int v[100],n,p,x,s;
          fin>>n;
          for(int i=0;i<n;i++)fin>>v[i];
          fin>>p;
          for(int i=0;i<n;i++)
          {
              s=0;
              x=v[i];
              while (x>0)
              {
                  s=s+x%10;
                  x=x/10;
              }
              if(s%p==0) fout<<v[i]<<" ";
          }
          fin.close();
          fout.close();
          return 0;}

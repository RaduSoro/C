#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
     using namespace std;
      ifstream fin ("1E030.cpp.in");
       ofstream fout("1E030.cpp.out") ;
        int main (){
        int v[100],n,k;
        //cout<<"n= ";
        //cin>>n;
         fin>>n;
         for (int i=0;i<n;i++)
           // cout<<"v[i]=";
            //cin>>v[i];
            fin>>v[i];
         k=0;
         for (int i=1; i<n; i++)
            if(v[i]==v[i-1]) k++;
          fout<<k;
           fin.close();
            fout.close();
            getch();
            return 0; }

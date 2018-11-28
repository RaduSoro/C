#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int n,a[100],mix,max,pmin,pmax,i,j,aux;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    max=min=a[1];
    for(i=1;i<=n;i++)
    if (a[i]>max){max=a[i];pmax=i;}
    else if(a[i]<min){min=a[i];pmin=i;}
    if(pmin>pmax){aux=pmin;
    pmin=pmax;
    pmax=aux;}
        if(pmax==pmin+1)cout<<"nu se poate ordona";
        else{
            for(i=pmin;i<pmax;i++)
                for(j=i+1;j<=pmax;j++)
            if(a[i]>a[j]){aux=a[i];
                a[i]=a=j;
            a[j]=aux;
               }
               for(i=1;i<=n;i++)cout<<a[i]<<" ";
        }return 0; getch();
    }

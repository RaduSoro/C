#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
int a[20],i,n,j,o;
cout<<"n= ";
cin>>n;
for(i=1;i<n;i++)
if(i==3 || i==5 || i==7 || i==1 || i==2) {
    a[i]=i;
}
if(i%2!=0 && i%3!=0 && i%4!=0 && i%5!=0 && i%6!=0 && i%7!=0 && i%8!=0 && i%9!=0 && i%10!=0)//doar daca n<10
//if(i==3 || i==5 || i==7 || i==1 || i==2)
                                                        /*for(j=2;j<i;j++)
                                                        contor=0;
                                                        do
                                                        if(i%j==0){
                                                        contor=1}
                                                        while(contor=1);
                                                        if(contor!=1)*/
a[i]=i;
for(i=1;i<n;i++)
cout<<a[i];}

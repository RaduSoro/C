#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
int c_nenule(int numar){
int c_nenule=0;
char c;
c=getch();
while (numar>0){
if((numar%10)>0)c_nenule=c_nenule+c;
numar=numar/10;
}
return c_nenule;}
main(){
int n,numar,i=i;
bool exista=false;
cout<<"Introduce nr de val pe care le veti introduce: ";cin>>n;
while(i<=n){
cout<<"Introduceti un numar: ";cin>>numar;
if (exact c nenule (numar)==3) exista=true;
        i=i+1;

}
if(exista==true)cout<<"Este un nr exact cu 3 cifre nenule";
else cout<<"Nu exista nr cu 3 cifre nenule";
getch();}

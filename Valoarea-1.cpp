#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
main(){
int numar,v_iesire;
v_iesire=0;
cout<<"Introdu un numar: ";cin>>numar;
if (numar==-1)goto end;{
if (numar>=0){
while (numar>0){
        if(numar%10==0)v_iesire=v_iesire+1;numar=numar/10;}}}
end:
    cout<<"Numarul de zerouri aparute in sirul de numere introdus este: "<<v_iesire;
    getch();
}

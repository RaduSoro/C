#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
main(){
int nr,cifra,nr2;
cout<<"Introduceti un numar: ";
cin>> nr;
while (nr>0)


{
cifra=nr%10;
nr2=nr*10+cifra;
nr=nr/10;}

cout<<nr2;
getch();
}


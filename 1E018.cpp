#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* sa se scrie un program care sa afiseze tabla inmultirii de la 1 la 10*/
int main(){
    int i,j;;
    for(i=1;i<=10;i++)
    {
       for(j=i;j<=10;j++)
            cout<<i<<"x"<<j<<"="<<i*j<<endl;
            cout<<endl;
            }return 0;}

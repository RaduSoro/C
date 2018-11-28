#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
main(){
    int n;
    int div;
    cout<<"Introduceti un numar: ";
    cin>>n;
    cout<<"Introduceti divizorul: ";
    cin>>div;
        if(n%div==0){
        cout<<"Numarul "<<n<<" este multiplu de "<<div;}
        else{
            cout<<"Numarul "<<n<<" nu este multiplu de "<<div;}
            getch();
        }

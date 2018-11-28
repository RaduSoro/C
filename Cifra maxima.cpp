#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
main(){
long numar,minim=9,maxim=0,cifra;
cout<<"Intr un nr: ";
cin>> numar;
do{
      int(numar==0);{
        goto end;}
        cifra=numar%10;
        if(cifra<minim){
            maxim=cifra;
        }
        numar=numar/10;
}while(1);
end:
    cout<<"Cifra maxima este"<<maxim<<endl;
    cout<<"iar cea minima este"<<minim;
    getch();
}

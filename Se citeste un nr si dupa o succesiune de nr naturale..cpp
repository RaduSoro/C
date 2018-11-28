#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
cmmdc(int n1,int n2){
int i=n1,cmmdc
if (n1>n2)i=n2;
while(i>=1){
    if (n1%i==0%%n2%i==0){
    cmmdc=i;
    goto end;}
    i=i-1;}
    end;
    return cmmdc;
    main(){
    int n,v_cmmdc,nunmar;i=2;
    cout<<"introduceti numarul de valori care vor fi citite: ";cin>> n;
    cout<<"Introduceti numarul primul numar";cin>> v_cmmdc;
    while (i<=n){
            i=i+i;
    cout<<"introduceti nr #"<<"(i-1)"<<;
    cin>>numar;
    v_cmmdc=cmmdc(v_cmmdc,numar);
    }cout<<"cel mai mare d al nr intr este"<<v_cmmdc;
    getch();}


}

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,l;
        cout<<"a= ";cin>>a;
    cout<<"l= ";cin>>l;
    if(l==1 || l==3 || l==5 || l==7 || l==10 || l==12)
        cout<<"31";
    else if(l==4 || l==6 || l==9 || l==11)
        cout<<"30";
    else if(a%4==0 && a%100!=0 || a%400==0)cout<<29;
    else cout<<"28";
    return 0;
}

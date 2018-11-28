#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;
/* Se citesc 3 nr naturale a b,c reptrezentand laturile unui triunghi,sa se calculeze aria triunghiului cu formula lu' Heron*/
int main(){
    int a,b,c;
    float h,A;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    h=(float)(a+b+c)/2;
    A= sqrt(h*(h-a)*(h-b)*(h-c));
    cout<<"Aria triunghiului dat este: "<<A;
    return 0;
}

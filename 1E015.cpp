#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c,p;
    cout<<"p= ";cin>>p;
    for(a=1;a<=p/2;a++)
        for(b=a;b<=p/1;b++)
        c=p-a-b;
    if (c>=b&&a+b>c)cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc 3 nr a,b,c, sa se aviseze in ordine crescatoare*/
int main(){
    int a,b,c;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    if (a<=b && b<=c)cout<<a<<" "<<b<<" "<<c;
    else if (a<=c && c<=b)cout<<a<<" "<<c<<" "<<b;
     else if (b<=a && a<=c)cout<<b<<" "<<a<<" "<<c;
     else if (b<=c && c<=a)cout<<b<<" "<<c<<" "<<a;
     else if (c<=a && a<=b)cout<<c<<" "<<a<<" "<<b;
     else (c<=b && b<=a)cout<<c<<" "<<b<<" "<<a;
     return 0;
}

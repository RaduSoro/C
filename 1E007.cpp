#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* se citeste un nr intreg a reprezetand un an. Si se verifica daca a este an bisect.*/
int main(){
    int a;
    cout<<"a= ";
    cin>>a;
    if (a%4==0 && a%100!=0 || a%400==0)
        cout<<"da, este an bisect";
    else cout<<"nu, nu este an bisect";
    return 0;
}

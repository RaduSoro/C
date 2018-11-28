#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste un numar natural n.Afisati toate tripletele de nr naturale care pot fi reprezenta lungimea laturilor unui triunghi
isoscel cu semiperimetrul=p */
int main(){
    int a,c,p;
    cout<<"p= ";cin>>p;
    for(a=1;a<=p/2;a++)
        for (c=1;c<=p/2;c++)
        if (a+a+c==p && a+a>c)
        cout<<a<<" "<<a<<" "<<c<<endl;
    return 0;
}

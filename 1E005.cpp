#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc n numere naturale.Sa se afisese cel care are suma divizorilor max*/
int main(){
    int i,n,x,max=0;
    int mx,s=0,d;
    cout<<"Insetarti n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Inserati x: ";
        cin>>x;
        s=0;
        for(d=1;d<=x;d++)
            if(x%d==0)s++;
        if(s>max){max=s;
            mx=x;
        }}
        cout<<mx<<" "<<max;
        getch();
        return 0;
}


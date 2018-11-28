#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n,x,k;
    cout<<"Inserati n: ";
    cin>>n;
    x=n/2;
    for(k=1;k<=n;k++)
    {
        cout<<x<<" "<<x+1<<endl;
        x=x+n;
    }
    getch();
}

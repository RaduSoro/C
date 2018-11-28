#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int a[100],n,i,minim;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
        minim=a[1];
        for(i=1;i<=n;i++)
        if(a[i]<minim)minim=a[i];
        cout<<minim<<endl;
        for(i=1;i<=n;i++)
        if(a[i]==minim)cout<<i<<" ";
        return 0;
        getch();}

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se citesc de la tastatura nr naturale (cel putin 3) pana cant antepenultimul+penultimul=ultimul.Sa se afiseze suma nr citite*/
int main(){
    int x,y,z,s=0;
    cin>>x>>y>>z;
    s=x+y+z;
    while (x+y!=z)
    {
        x=y;
        y=z;
        cout<<"Inserati z: ";
        cin>>z;
        s=s+z;
    }
    cout<<s;
    getch();
    return 0;}


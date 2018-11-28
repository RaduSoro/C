//Convert an integer into binary
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Introduceti un numar : ";
    cin>>n;

    int display_binary_n(int dec)

    const int size = sizeof(int) * 8 ;
    unsigned int current;
    int i;
    for( i = size - 1 ; i >= 0 ; i--)
    {
        current = 1<<i;
        printf("%d",( (current & dec) != 0)  ? 1: 0);
    }
   cout<<"Numarul binar este :" ;
   cout << n ;
}

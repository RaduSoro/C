#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* sa se citeasca un nr natural n.Sa se det daca e cub perfect.*/
int main(){
    int n,i;
    cout<<"n= ";cin>>n;
    i=1;
    while(i*i*i<n)i++;
    if(n==i*i*i)cout<<"da";
    else cout<<"nu";
    return 0;}

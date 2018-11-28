#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste un nr natural n sa se det daca e cub perfect.*/
int main(){
    int n;
cin>>n;
float x=pow(n,1/3.0);
if(x==floor(x))cout<<"da";
else cout<<"nu";
return 0;
}

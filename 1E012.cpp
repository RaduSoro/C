#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
using namespace std;
/* Se introduc numere pana cand se introduce 0 sa se arate cel mai mare nr citi.*/
int main(){
    int x,max;
    cout<<"x= ";cin>>x;
    max=x;
    while(x!=0)
    {
        if(x>max) max=x;
            cout<<"x= ";cin>>x;
    }
    cout<<max;
    return 0;
}

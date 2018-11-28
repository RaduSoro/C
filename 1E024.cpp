#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste un nr natural n.Sa se afiseze n patrate ca in exemplu*/
int main(){
    {
        int i,n,e,c;
        cin>>n;
        for(i=1;i<=n;i++)
            for(e=1;e<=i;e++)
        {
            for(c=1;c<=i;c++)
                cout<<i<<" ";
            cout<<endl;
        }
        }return 0;
    }

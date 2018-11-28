#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste numarul natural n.Afisati in ordine crescatoare numerele de la 1 la n*n pe n randuri fiecare*/
int main(){
    int n,i;
    cout<<"n= ";cin>>n;

    for(i=1;i<=n*n;i++)
      {cout<<i<<" ";
        if(1%n==0)cout<<" "<<endl;
    }
    return 0;
}

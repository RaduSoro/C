#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
/* Se citeste  un vector a cu cel multi 9 vectori cifre.Sa se afiseze pe randuri separate permutarile circulare ale vectorului.*/
int Permutare(int a[10],int n){
    int aux=a[1];
    for (int i=1;i<=n;i++)
        a[i]=a[i+1];
        a[n]=aux;}
    int Afisare(int x[10],int n)
    {
        int i;
        for(i=1;i<=n;i++)
            cout<<x[i]<<" ";
        cout<<"\n";}
        int main(){
            int i,x[10],n;
            cin>>n;
            for(i=1;i<=n;i++)
                cin>>x[i];
            for(i=1;i<=n;i++)
            {
                Permutare(x,n);
                Afisare(x,n);
            }
            getch();
            return 0;
    }

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
int main(){
    int a[100],b[100],r[200],p,m,n,i,j,gasit;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    cin>>m;
for(i=1;i<=m;i++)cin>>b[i];
for(i=1;i<=n;i++) r[i]=a[i];
p=n;
for(j=1;j<=m;j++)
{
    gasit=0;
    for(i=1;i<=n;i++)if(a[i]=b[j])gasit=1;
    if(!gasit){p++;
        r[p]=b[j];
    }}
for(i=1;i<=p;i++) cout<<r[i]<<" ";
return 0;}



#include <iostream>
#include<string.h>
using namespace std;
int main(){
int x=0,y=0;
char z[3];

cout<<"z=?";cin>>z;
if (strcmp(strupr(z),"TEST") == 0)
    cout << "Correct"<<endl;
else cout<<"fail";
}

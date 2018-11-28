// Fibonacci

#include<iostream>
#include<conio.h>
using namespace std;

//header conio, care include functii biblioteca pentru
// "console input and output"
#include <conio.h>
//header iostream, care suporta  C++ I/O
#include <iostream>
//comunica compilatorului folosirea std namespace
using namespace std;

//executie program
int main()
{
    int n, firstNum = 1, secondNum = 1, fNum;
    cout<<"Introduceti numarul termenilor :";
    cin>>n;

    cout<<"Fb(0) = 1"<<endl;
    cout<<"Fb(1) = 1"<<endl;

    for (int i = 2; i < n; i ++)
    {
        fNum = firstNum + secondNum;
        secondNum = firstNum;
        firstNum  = fNum;

        cout<<"Fb("<<i<<") = " <<fNum<<endl;
    }

    return 0;
}



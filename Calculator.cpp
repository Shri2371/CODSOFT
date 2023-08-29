#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char operator;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>operator;
    cout<<"enter two number: ";
    cin>>b,c;
    switch (operator)
    {
        case '+':
        a=b+c;
        break;
        case '-':
        a=b-c;
        break;
        case '*':
        a=b*c;
        break;
        case '/':
        if(c != 0){
        a=b/c;}
        else{
cout<<"the number is not divide to 0 ";
return 1;}
        break;
     default:
     cout<<"invalid operator";
    }
    cin>>"The result is :%d \n">>a;
    return 0;

//First program TPO -> data types, initialization, etc..
#include<iostream>
#include<conio.h>
using namespace std;
int main()  //Declaration
{
    int a,b,c = 0 ; //Initialization
    float d,f = 4.5;
    cout << "ADVAIT CHAVAN";
    cout << "\nEnter two numbers :- ";
    cin >> a;
    cin >> b;
    c = a+b;
    cout << "The sum of two numbers is : " << c;
    cout << "\nThe difference of two numbers is: " << a-b;
    cout << "\nThe product of two numbers is : " << a*b;
    cout << "\nThe division of two numbers is :" << a/b;
    cout << "\nThe modulus of two numbers is : " << a%b;
}

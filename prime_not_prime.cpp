//Program to verify whether the given number is prime or not prime
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int number;
    cout << "\nEnter any integer number : ";
    cin >> number;
    if ((number == 0) | (number == 1)){
            cout << "\nThe entered number is a prime number";
        }
    for (int i=2; i <= number/2 ; i++){
        if(number%i != 0){
                cout << "\nThe entered number is a prime number";
                break;
            }
        else{
                cout << "\nThe entered number is not a prime number";
            }
        }

}

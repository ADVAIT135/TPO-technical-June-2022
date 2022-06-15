//Program to print the fibonacci series 0,1,1,1,2,3,5...
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int no_of_terms, term_1=0 , term_2=1, next_term=0;
    cout <<  "Enter the number of terms you want in the series :-" << endl;
    cin >> no_of_terms;
    cout << "\nThe fibonacci Series are :- " << endl;
    for (int i=0;i<=no_of_terms; i++){
        if(i == 1){
            cout << term_1 << ", ";
            continue;
        }
        if (i==2){
        cout << term_2 << ", ";
        continue;
        }
    next_term = term_1 + term_2;
    term_1 = term_2;
    term_2 = next_term;
    cout << next_term << ", ";
    }
}

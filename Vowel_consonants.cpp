//Vowel and consonants in a given word
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int no_of_letters, no_of_vowels_in_word = 0, no_of_consonants_in_word = 0;
    string word, vowels, consonants;
    cout << "Enter the number of letters in the word : " << endl;
    cin >> no_of_letters;
    for (int i=0;i<no_of_letters;i++){
        cout << "\nEnter the " << i+1 << " letter of the word : ";
        cin >> word[i];
    }
    cout << "\nThe entered word is :- " << endl;
    for (int i=0; i<no_of_letters; i++){
        cout << word [i];
    }

    for (int j=0;j<no_of_letters;j++){
           if ((word[j]=='A')|(word[j]=='a')|(word[j]=='E')|(word[j]=='e')|(word[j]=='I')|(word[j]=='i')|(word[j]=='O')|(word[j]=='o')|(word[j]=='U')|(word[j]=='u')){
               no_of_vowels_in_word += 1;
               vowels += word[j];
           }
           else{
               no_of_consonants_in_word += 1;
               consonants += word[j];
           }
    }
    cout << "\nThe number of vowels in the entered word are : " << no_of_vowels_in_word;
    cout << "\nThe vowels present are : " << endl;
    cout << vowels;
    cout << "\nThe number of consonants in the entered word are : " << no_of_consonants_in_word;
    cout << "\nThe consonants present are : " << endl;
    cout << consonants;

}

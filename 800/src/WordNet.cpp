/*
https://codeforces.com/problemset/problem/59/A

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. 
That's why he decided to invent an extension for his favorite browser that would change the 
letters' register in every word so that it either only consisted of lowercase letters or, 
vice versa, only of uppercase ones. At that as little as possible letters should be changed 
in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. 
If a word contains an equal number of uppercase and lowercase letters, you should replace all the 
letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to 
use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and 
possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the 
word written in the uppercase register, otherwise - in the lowercase one.
*/

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int i = 0;
    char word[100];
    cin >> word;
    
    int lower = 0;
    int upper = 0;

    while (word[i])
    {
        char c = word[i];
        if (islower(c)) lower++;
        else if (isupper(c)) upper++; 
        i++;
    }

    i = 0;
    if (upper > lower)
    {
        while(word[i])
        {
            char c = word[i];
            c = toupper(c);
            putchar(c);
            i++;
        }
    }
    else
    {
        while(word[i])
        {
            char c = word[i];
            c = tolower(c);
            putchar(c);
            i++;
        }
    }
    return 0;
}
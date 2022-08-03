/**
 * Capitalization is writing a word with its first letter as a 
 * capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one 
remains unchanged.

Input
A single line contains a non-empty word. This word consists of 
lowercase and uppercase English letters. The length of the word 
will not exceed 103.

Output
Output the given word after capitalization.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char letter[1000];
    cin >> letter;

    for (int i = 0; i < strlen(letter); i++)
    {
        if (i == 0)
        {
            putchar(toupper(letter[i]));
        }
        else
        {
            putchar(letter[i]);
        }
    }
    return 0; 
}
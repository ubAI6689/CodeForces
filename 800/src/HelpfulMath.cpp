// https://codeforces.com/problemset/problem/339/A
/**
 * Xenia the beginner mathematician is a third year 
 * student at elementary school. She is now learning 
 * the addition operation.

The teacher has written down the sum of multiple numbers. 
Pupils should calculate the sum. To make the calculation easier, 
the sum only contains numbers 1, 2 and 3. Still, that isn't 
enough for Xenia. She is only beginning to count, so she can 
calculate a sum only if the summands follow in non-decreasing 
order. For example, she can't calculate sum 1+3+2+1 but she 
can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange
 the summans and print the sum in such a way that Xenia can 
 calculate the sum.

Input
The first line contains a non-empty string s — the sum Xenia 
needs to count. String s contains no spaces. It only contains
 digits and characters "+". Besides, string s is a correct 
sum of numbers 1, 2 and 3. String s is at most 100 characters long.

Output
Print the new sum that Xenia can count.
 * 
 */

// solution inspired from https://stackoverflow.com/questions/5757721/use-getline-and-while-loop-to-split-a-string

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
   // inputs
   string str;
   cin >> str;
   char split_char = '+';

   // work
   istringstream split(str);
   vector<string> tokens;
   for (string each; getline(split, each, split_char); tokens.push_back(each));

   // now use `tokens`
    sort(tokens.begin(), tokens.end());
    for (int i = 0; i < tokens.size(); i++)
    {
        if (i == tokens.size()-1)
            cout << tokens[i] << endl;
        else 
            cout << tokens[i] << "+";
    }
    return 0;
}
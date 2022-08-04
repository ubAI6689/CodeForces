#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X = 0;
    int lines = 0;
    cin >> lines;

    for (int idx = 0; idx != lines; ++idx)
    {
        string command;
        while (true) 
        {
            cin >> command;
            if (command == "++X" || command == "X++")
            {
                X++;
            }
            else if (command == "--X" || command == "X--")
            {
                X--;
            }
            //cout << i << endl;
            if (cin.peek() == '\n') {
                break;
            }
        }
    }
    cout<<X<<endl;
    return 0;
}
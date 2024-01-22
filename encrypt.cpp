// String variable that holds the string entered into the console
// A variable that indicates how the encryption will work

// List the libraries to use
// Print a statement asking for a string to encrypt
// Have the user enter a random number between 1 and 25
// have a for loop go through the whole string and change the letters according to the number variable given
// Print out the resulting string

// #include <iostream>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    string encryptThis;
    int encryptNum = -1;
    int encryptLet;
    int encryptRemain;
    cout << "Please type in a string to encrypt\n";
    getline(cin,encryptThis);
    //cin >> encryptThis;
    cout << "String to encrypt: " + encryptThis + "\n";
    int stringlen = encryptThis.length();
    while(encryptNum < 0)
    {
        cout << "Please enter a number between 1 and 25 (inclusive)\n";
        cin >> encryptNum;
        if(encryptNum <= 0 || encryptNum >= 26)
        {
            cout << "I said enter a number between 1 and 25 (inclusive)!\n";
            encryptNum = -1;
        }
        else
        {
            for(i = 0; i < stringlen; i++)
            {
                
                
                // If statement checks if letter is in the right Ascii ranges
                // If it isn't it passes
                // If it is, the if statements check which range it's in
                // Whatever the range is, the operations are done

                if((encryptThis[i] < 91 && encryptThis[i] > 64) || (encryptThis[i] < 123 && encryptThis[i] > 96))
                {
                    if((encryptThis[i] < 91 && encryptThis[i] > 64))
                    {
                        encryptLet = encryptThis[i];
                        encryptRemain = 90 - encryptThis[i];
                        if(encryptRemain <= encryptNum)
                        {
                            encryptThis[i] = 65 + (encryptNum - encryptRemain);
                        }
                        else
                        {
                            encryptThis[i] = encryptThis[i] + encryptNum;
                        }
                    }
                    else
                    {
                        encryptLet = encryptThis[i];
                        encryptRemain = 122 - encryptThis[i];
                        if(encryptRemain <= encryptNum)
                        {
                            encryptThis[i] = 97 + (encryptNum - encryptRemain);
                        }
                        else
                        {
                            encryptThis[i] = encryptThis[i] + encryptNum;
                        }
                        
                    }
                }
                else
                {
                    continue;
                }
            }
            break;
        }
    }
    cout <<  "New Encrypted String: " + encryptThis + "\n";
    return 0;
}


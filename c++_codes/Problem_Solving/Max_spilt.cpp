#include <iostream>
using namespace std;
int main()
{
    /*
    You will be given string that consist of {L , R} only spilt them into new string.
    **Balanced strings are those who have equal quantities of 'L' and 'R' characters.
    **You can not remove or reorder the characters while making the new strings.
                         "LLRRLLLRRR"

                         int l_n = 0, r_n = 0, new_t=0;

                         if(text[i] == 'L') l_n++;

                         else if(text[i] == 'R') r_n++;

                         else if (l_n == r_n){
                            new_t++;
                            l_n=0;
                            r_n=0;
                         }
             ######################################
                            LLRRLLLRRR
                            >> 2
                            >> LLRR
                            >> LLLRRR
                            create array[length/2];
                            cout<<array_size<<endl;

    */

    string text, test;
    cin >> text;
    int l_n = 0, r_n = 0, new_t = 0;
    for (int i = 0; i < text.length(); i++)
    {
        test += text[i];
        if (text[i] == 'R')
        {
            r_n++;
            // test+=text[i];
        }

        else if (text[i] == 'L')
        {
            l_n++;
            // test+=text[i];
        }

        if (l_n == r_n)
        {
            new_t++;
            l_n = 0;
            r_n = 0;
            test += '#';
            // cout<<test<<endl;
            // test="";
        }
    }
    cout << new_t << endl;
    for (int i = 0; i < test.length(); i++)
    {
        if (test[i] == '#')
        {
            cout << endl;
            continue;
        }
        cout << test[i];
    }

    return 0;
}
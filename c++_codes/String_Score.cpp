#include <iostream>
using namespace std;
int main()
{
    /*
          text contains == {V,W,X,Y,Z}.
          1)V: Adds to the score 5 points.
          2)W: Adds to the score 2 points.
          3)X: Removes the next consecutive character from the string.
          ##********####*******##
                    ('x')
            loop to three times:
                1   2   3
                0   1   2
                    <3
            How make it escape '2'??????
            >> if(i==1)
                {
                    i++;
                }
          ##********####*******##
          4)Y: Moves the next consecutive character to the end of the string.
          How do this ???????????
          text+=text[i];
          len++;
          5)Z: If the next consecutive character is V it divides
          the total score by 5 but if it is W it divides the total score by 2.
          Then it removes the next consecutive character from the string if and
          only if the next character is V or W.

    */
    int score = 0, len = 0;
    string text = "";
    cin >> len >> text;
    for (int i = 0; i < len; i++)
    {
        if (text[i] == 'V')
        {
            score += 5;
            // cout << score << endl;
        }
        else if (text[i] == 'W')
        {
            score += 2;
            // cout << score << endl;
        }
        else if (text[i] == 'X' && (i != len - 1))
        {
            i++;
        }
        else if (text[i] == 'Y' && (i != len - 1))
        {
            text += text[i + 1];
            ++len;
            i++;
        }
        else if (text[i] == 'Z' && (i != len - 1))
        {
            if (text[i + 1] == 'V')
            {
                score /= 5;
                //   cout << score << endl;
                i++;
            }
            else if (text[i + 1] == 'W')
            {
                score /= 2;
                // cout << score << endl;

                i++;
            }
        }
    }
    cout << score << endl;
    return 0;
}
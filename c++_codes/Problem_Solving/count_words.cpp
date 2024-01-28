#include <iostream>
#include <string>
using namespace std;
int main() {
	string text , test;
	getline(cin, text);
	text += " ";
	int k=0;
	for (int i = 0; i < text.length(); i++)
	{
		if (isalpha(text[i])) {
			test += text[i];
		}
		else {
			for ( k= test.length()-1;  k>=0 ; k--)
			{
				cout << test[k];
			}
			if (i != text.length() - 1) {
				cout << " ";
			}
			test = "";
		}
	}
	return 0;
}
/*   Check Whether a character is Vowel / Consonant  */

#include <iostream>
using namespace std;

int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;

    cout << "Enter any character to check : ";
    cin >> c;

    //  1 (true) if lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    //  1 (true) if uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // 1 (true) if either Lowercase Vowel or Uppercase Vowel 
    if (isLowercaseVowel || isUppercaseVowel)
    {
         cout<<"\nThe Character [ "<<c<<" ] is a Vowel.\n";
    }
    else
    {
         cout<<"\nThe Character [ "<<c<<" ] is a Consonant.\n";
    }
    return 0;
}

#include <iostream>
#include "Algos.h"
#include <string>

using namespace std;

int main()
{
    int a = 2, b = 0;
    for (int i = 0; i <= 15; ++i)
    {
        cout << "a = " << a << ", i = " << i << ", a^i = " << bin_pow(a, i) << endl;
    }

    cout << "GCD_Euclid algos, enter 2 numbers: " << endl;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " = " << gcd_Euclid(a, b) << endl;

    cout << "LCM 0f " << a << " and " << b << " = " << lcm(a, b) << endl;

    char str[80] = "aaabaab";
    cout << "z-function of " << str << " is:\n";
    z_function(str, 1);

    char str1[80] = "But can you find a word in sentence?";//Yeah!
    char str2[80] = "word";

    //strcat(str1, str2);
    //strcat(str1, '@');
    //strcpy(str1, str2);
    //cout << strlen(str1) << "\n";
    //strrev(str1);
    //to_upper(str1);
    //to_lower(str1);
    //cout << substr(str1, str2) << "\n";
    //cout << str1 << "\n";


    return 0;
}

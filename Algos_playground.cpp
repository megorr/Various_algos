#include <iostream>
#include "Algos.h"

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
    z_function(str, 1);


    return 0;
}

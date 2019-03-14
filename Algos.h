#include <iostream>
#include <vector>
#include <iterator>


int bin_pow(int a, int n)//Бинарное возведение в степень
{
    if(n == 0) return 1;
    if(!n%2) return bin_pow(a, n/2) * bin_pow(a, n/2);
    else return a * bin_pow(a, n-1);
}


int gcd_Euclid(int a, int b)//НОД
{
    if(!b) return a;
    else return gcd_Euclid(b, a%b);
}

int lcm(int a, int b)//НОК
{
    return a*b/gcd_Euclid(a, b);
}


std::vector<int> z_function(char *str)//z-функция
{
    std::vector<int> z_array = {};
    z_array.push_back(0);
    char *begin = str++;
    int count = 0;

    do
    {
        char *substr = str++, *temp = begin;
        count = 0;   
        while(*substr == *temp)
        {
            ++count;
            ++substr;
            ++temp;
        }
        z_array.push_back(count);

    } while (*str);
    
    return z_array;
}

std::vector<int> z_function(char *str, bool print)//Тоже z-функция, но с выводом массива
{
    std::vector<int> z_array = {};
        z_array.push_back(0);
        char *begin = str++;
        int count = 0;

        do
        {
            char *substr = str++, *temp = begin;
            count = 0;   
            while(*substr == *temp)
            {
                ++count;
                ++substr;
                ++temp;
            }
            z_array.push_back(count);

        } while (*str);
        

    if(print)
    {
        for(std::vector<int>::iterator i = z_array.begin(); i != z_array.end(); ++i) std::cout << *i << " ";
        std::cout << std::endl;

        return z_array;
    }
    return z_array;
}
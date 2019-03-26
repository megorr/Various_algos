#include <iostream>
#include <vector>
#include <iterator>


int bin_pow(int a, int n)//Бинарное возведение в степень
{
    if(n == 0) return 1;
    if(!n%2) return bin_pow(a, n/2) * bin_pow(a, n/2);
    else return a * bin_pow(a, n-1);
}


template<typename X> 
void swap(X *a, X *b)//Plain swap function
{
    X tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

template<typename X> //Still swap
void swap(X a, X b)
{
    X tmp = a;
    a = b;
    b = tmp;
    return;
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


void strcat(char *str1, char *str2)//Concatenation of two char arrays str1+str2
{
    while(*str1)
    {
        ++str1;
    }
    while(*str2)
    {
        *str1++ = *str2++;
    };
    return;
}

void strcat(char *str, char symbol)//Concatenation of char array and symbol str+symbol
{
     while(*str)
    {
        ++str;
    }
    *str++ = symbol;
    *str = '\0';
}

void strcpy(char *str1, char *str2)//Copies str2 to str1 str1 = str2
{
    while(*str2)
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}

int strlen(char *str)//Calculate length of char array
{
    int len = 0;
    while(*str++)
    {
        ++len;
    }
    return len;
}

void strrev(char *str)//Reverse char array
{
    int len = strlen(str);
    for(int i = 0; i < len/2; ++i)
    {
        swap(&str[i], &str[len - i - 1]);
    }
}

void to_upper(char *str)//Upper case char array
{
    while(*str)
    {
        if(*str > 96 && *str < 123) *str -= 32;
        ++str;
    }
    return;
}   

void to_lower(char *str)//Lower case char array
{
    while(*str)
    {
        if(*str > 64 && *str < 91) *str += 32;
        ++str;
    }
}

int substr(char *str1, char *str2)//Returns index of the begining of str2 in str1, or -1 if no str2 in str1
{
    int len = strlen(str2);

    strcat(str2, '$');
    strcat(str2, str1);

    std::vector<int> z_vec = z_function(str2);

    for(int i = 0; i < z_vec.size(); ++i)
    {
        if(z_vec[i + len + 1] == len) return i;
    }
    return -1;
}

bool is_palindrome(char *str)//Checks whether str is palindrome or not
{
    int len = strlen(str);

    for (int i = 0; i < len / 2; ++i)
    {
        if(str[i] != str[len - i - 1]) return 0;
    }
    return 1;
}

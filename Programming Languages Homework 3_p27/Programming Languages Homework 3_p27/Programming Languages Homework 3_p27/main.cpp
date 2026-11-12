#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

long long factorial(long long number);

int main()
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        cout << i << "! = " << factorial(i) << endl;
    }

    system("pause");
    return 0;
}

long long factorial(long long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
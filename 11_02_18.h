//
// Created by zegs on 11/2/18.
//

#include <iostream>
#include <cmath>


using namespace std;


// метод быстрого возведения в степень (значительно быстрее классического перемножения)
// (при показателе степени больше 25) - from timing tests in /main.cpp
int ex_a(int q)
{
    int root_of_eponent = 2;
    int count = 1;

    if (!q)
        return 0;

    while (q)
    {
        if (q%2==0)
        {
            q /= 2;
            root_of_eponent *= root_of_eponent;
        } else
        {
            q--;
            count *= root_of_eponent;
        }
    }

    return count;
}

//тривилаьный метод
int ex_a_v2(int q)
{
    int res = 1;
    for (int i = 1; i <= q ; ++i)
    {
        res *= 2;
    }

    return res;
}

// Основан на том, что большие числа с близким количесвом цифр между собой перемножать проще, чем числа с большим
// кол-вом цифр на числа с малым кол-вом цифр.
long long tree_fact(long long a, long long b)
{
    if (a > b)
        return 1;

    if (a == b)
        return a;

    if ((b-a) == 1)
        return a*b;

    long long m = (b+a)/2;
    return tree_fact(a, m) * tree_fact(m+1, b);
}


// метод бинарного дерева (дихотомический алгоритм возведения в степень, бинарный алгоритм возведения в степень)
// O(N) = log2 N, примерно в двое быстрее(для больших N = {50000}) "тривиального".
// не очень интересно в С++ т.к. тут нет "встороенной" длинной арифметики :'(
// тесты показали что в пределах  long long алгоритм работает медленне тривиального
long long ex_b(long long n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (n==1 || n==2)
        return n;

    return tree_fact(2, n);
}

//тривиальный метод
long long ex_b_v2(long long n)
{
    long long res = 1;
    for (int i = 1; i <= n; ++i)
    {
      res *= i;
    }
    return res;
}


double ex_v(double n) {
    double res = 1;
    while (n) {
        res *= 1 + (1 / pow(n, 2));
        n--;
    }
    return res;
}

//тесты показали, что рекусивный вызов не лучший вариант, работает он в два раза дольше обычного цикла.
double ex_d(double n, double res=0) {
    if (!res)
        res = sqrt(2);
    n--;
    if (!n)
        return res;
    return ex_d(n, sqrt(2+res));

}

double ex_d_v2(double n)
{
    double res = sqrt(2);
    for (int i=2; i<=n; i++)
    {
        res = sqrt(2+res);
    }
    return res;
}

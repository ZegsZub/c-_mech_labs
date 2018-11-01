#include <iostream>
#include <cmath>

using namespace std;

int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();
int ex7();
int ex8();
int ex9();
int ex10();
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();
int ex16();
int ex17();


int main() {
//    ex1();
//    ex2();
//    ex3();
//    ex4();
//    ex5();
//    ex6();
//    ex7();
//    ex8();
//    ex9();
//    ex10();
//    ex11();
//    ex12();
//    ex13();
//    ex14();
//    ex15();
//    ex16();
    ex17();

}

int ex1(){
    long int n, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cout << i << ' ';

    }

}


int ex2(){
    long int a, b, i;
    cin >> a;
    cin >> b;
    for (i=a; i <=b; i++)
    {
        cout << i*i << ' ';

    }
    cout << '\n';

    for (i=b; i >=a; i--)
    {
        cout << i*i*i << ' ';

    }

}

int ex3(){
    long int n, i, res=1;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        res *= i;

    }
    cout << res;

}

int ex4(){
    int n, coin, z = 0, x = 0, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> coin;
        if (coin == 1)
            z++;
        else
            x++;

    }
    if (z > x)
        cout << x;
    else
        cout << z;

}

int ex5(){
    long int n, temp, min , i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (i==1){
            min = temp;
        }
        if (temp < min)
            min = temp;

    }
        cout << min;

}


int ex6(){
    int n, temp, min = 100, max = 0, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (temp < min)
            min = temp;
        if (temp > max)
            max = temp;

    }
    cout << max - min;

}

int ex7(){
    int n, temp, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (temp >= 0)
            cout << temp + 2 << ' ';
        else
        cout << temp << ' ';


    }

}

int ex8(){
    int n, i;
    double temp, res = 0;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        res += temp;
    }
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
    cout << res;

}

int ex9(){
    int n, i, count = 0;
    double temp, res = 0.0;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (temp < 0) {
            count += 1;
            res += temp;
        }
    }
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);
    cout << count << ' ' << res;

}


int ex10(){
    int n, i, count = 0;
    double temp, res = 0.0;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (temp > 0) {
            count += 1;
            res += temp;
        }
    }
    std::cout.precision(2);
    std::cout.setf(std::ios::fixed);
    if (count > 0){
        cout << res/count;
    } else
        cout << "Not Found";

}

int ex11(){
    int n, temp, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> temp;
        if (temp % 2 !=  0)
            cout << temp << ' ';


    }

}

int ex12(){
    int n, a, b, i;
    cin >> n;
    for (i=1; i <=n; i++)
    {
        cin >> a;
        cin >> b;
        cout << a+b << endl;
    }

}

int ex13(){
    int a, b, i , d1, d2, d3, d4;
    cin >> a;
    cin >> b;
    for (i=a; i <=b; i++)
    {
        d1 = i % 10;
        d2 =  i/1000;
        d3 = i%100/10;
        d4 = i%1000/100;
        if (d1!=d2 and d1!=d3 and d1!=d4 and d2!=d3 and d2!=d4 and d3!=d4)
            cout << i << ' ';
    }

}

int bpow(int x, int n, int m)
{
    int count=1;
    if (!n) return 1;
    while (n) {
        if (n%2==0) {
            n/=2;
            x*=x;
            x %= m;
        } else {
            n--;
            count*=x;
            count %=m;
        }
    }
    return count % m;
}

int ex14(){
    int res, a, b, m;
    cin >> a;
    cin >> b;
    cin >> m;

    res = bpow(a, b, m);

    cout << res << endl;
}

int ex15() {
    int n, i, p1, p2, p1w=0, p2w=0;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> p1;
        cin >> p2;
        if (p1 > p2)
            p1w += 1;
        if (p1 < p2)
            p2w += 1;
    }

    if (p1w > p2w){
        cout << 1 << endl;
    }

    if (p1w < p2w){
        cout << 2 << endl;
    }
    if (p1w == p2w){
        cout << 0 << endl;
    }
}

int ex16() {
    int n, i, t, temp, count = 0;
    cin >> n;
    cin >> t;
    for (i = 1; i <= n; i++) {
        cin >> temp;
        if ((t-temp) >=  0){
            count += 1;
            t -= temp;
        } else{
            break;
        }
    }
    cout << count;
}

int ex17()
{
    int n, nt, i, q, a, b, temp_a, temp_b;
    cin >> nt;
    for (q = 1; q <= nt; q++)
    {
        cin >> n;
        i = 1;
        for (i = 1; i <= n; i++)
        {
            cin >> temp_a;
            cin >> temp_b;
            if (i==1)
            {
                a = temp_a;
                b = temp_b;
            }

            if (temp_a > a)
                a=temp_a;

            if (temp_b < b)
            {
                b=temp_b;
            }



        }
        if (a > b)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}



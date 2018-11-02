#include <iostream>
#include <chrono>
#include <cmath>
#include "lab_1.h"
#include "11_02_18.h"

using namespace std;

int main()
{
    int a = 20 ;
    int runs = 1000000;

    auto begin1 = chrono::steady_clock::now();
    double b;
    for (int i=1; i<=runs; i++){
        b = ex_a(a);
    }
    auto end1 = chrono::steady_clock::now();
    auto elapsed_ms1 = chrono::duration_cast<chrono::milliseconds>(end1 - begin1);

    auto begin2 = chrono::steady_clock::now();
    double bb;
    for (int i=1; i<=runs; i++){
        bb = ex_a_v2(a);
    }
    auto end2 = chrono::steady_clock::now();
    auto elapsed_ms2 = chrono::duration_cast<chrono::milliseconds>(end2 - begin2);

    double time_run1 = elapsed_ms1.count();
    double time_run2 = elapsed_ms2.count();

    cout << "Result of 1-st fun -> " << b << "   ||  Result of 2-d fun -> " << bb << '\n';
    cout << "The work time 1-st fun: " << time_run1 << " ms\n";
    cout << "The work time 2-d fun:  " << time_run2 << " ms\n";
    double time_ratio;
    string value = "faster";
    if (time_run1 < time_run2)
    {
        time_ratio = 1 - (time_run1 / time_run2);
    }
    else {
        time_ratio = 1 - (time_run2 / time_run1);
        value = "slower";
    }


    cout << "First function " << time_ratio*100 << " percent " << value << " then second function \n";

}



#include <iostream>
#include <chrono>
#include <cmath>
#include "lab_1.h"
#include "11_02_18.h"

using namespace std;

int main()
{
    int a = 5 ;
    int runs = 100;

    auto begin1 = std::chrono::steady_clock::now();
    double b;
    for (int i=1; i<=runs; i++){
        b = ex_e(a);
    }
    auto end1 = std::chrono::steady_clock::now();
    auto elapsed_ms1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);

    auto begin2 = std::chrono::steady_clock::now();
    double bb;
    for (int i=1; i<=runs; i++){
        bb = ex_e(a);
    }
    auto end2 = std::chrono::steady_clock::now();
    auto elapsed_ms2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - begin2);
    
    long int time_run1 = elapsed_ms1.count();
    long int time_run2 = elapsed_ms2.count();

    cout << "Result of 1-st fun -> " << b << "   ||  Result of 2-d fun -> " << bb << '\n';
    std::cout << "The work time 1-st fun: " << time_run1 << " ns\n";
    std::cout << "The work time 2-d fun:  " << time_run2 << " ns\n";
    std::cout << "First function " << (time_run2/time_run1) *100 << " percent faster then second function \n";

}



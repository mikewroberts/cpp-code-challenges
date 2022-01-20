#include<iostream>
#include<chrono>
#include<windows.h>
using namespace std;
using namespace std::chrono;

void test_function_a()
{   
    for(int i = 0; i < 100; i++)
    {
        cout << "Hello World!";
    }
    
}

void test_function_b()
{
    for(int i = 0; i < 100; i++)
    {
        printf("Hello World!");
    }
}

int main()
{

    // Test function A :
    auto start = high_resolution_clock::now();
    test_function_a();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Function A duration: " << duration.count() << endl;

    Sleep(1000);

    // Test function B :
    start = high_resolution_clock::now();
    test_function_b();
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << "Function B duration: " << duration.count() << endl;
 
    return 0;
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t = 0 , a = 0;
    for(int i = 0 ; i< 3 ; i++)
    {
        cin >>  a;
        while(a < 0 || a > 1000)
        {
            cin >> a;
        }
        t = t + a; 
    }
    cout << t;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
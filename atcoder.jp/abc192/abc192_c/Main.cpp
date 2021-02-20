//(・ω・)
#include <stdio.h>
#include <iostream> // cout, endl, cin
#include <string> // string, to_string, atoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
#include <iomanip> //setprecision
#include <limits>
#include <sstream> //istringstream
#include <stdlib.h>
#include <list>
#include <iterator>//std::advance()
using namespace std;
const double pi=3.141592653589793238;

int main(){
    long long n;
    int k;
    cin >> n >> k;
    for(int i = 0; i < k; i++) {
        vector<int> x;
        long long j = 10;
        while(n > 0) {
            x.push_back((n%j)/(j/10));
            n-=(n%j);
            j*=10;
        }
        sort(x.begin(),x.end());
        int xsize = x.size();
        long long c10 = 1;
        bool kuri = 0;
        for(int p = 0; p < xsize; p++) {
            long long b = x[p] - x[xsize - 1 - p];
            if(kuri) b--;
            if(b < 0) {
                kuri = 1;
                n += c10*(10 + b);
            }
            else {
                kuri = 0;
                n += c10*b;
            }
            c10*=10;
        }
    }
    cout << n << endl;
    
} 
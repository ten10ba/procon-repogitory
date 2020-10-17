//(・ω・)
#define _GLIBCXX_DEBUG
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
const long long MOD = 1000000007;
int main(){
    long long n;
    cin >> n;
    stack<long long> S;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cout << i << endl;
            if(n/i!=i) S.push(n/i);
        }
    }
    while(!S.empty()){
        cout << S.top() << endl;
        S.pop();
    }
}


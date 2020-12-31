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
    priority_queue<long long> q;
    long long sum = 0, ans = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        q.push(a);
        sum += a;
    }
    for(int i = 0; i < n; i++) {
        long long x = q.top();
        q.pop();
        ans += x*(n-i)-sum;
        sum-=x;
    }
    cout << ans << endl;
}
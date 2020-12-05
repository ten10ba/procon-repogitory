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
const double pi = 3.141592653589793238;
const long long MOD = 1000000007;
int main(){
    string s;
    cin >> s;
    long long ans = 0, l = s.size();
    for (int bit_i = 0; bit_i < (1 << l - 1); ++bit_i) {
        long long num = 10;
        ans += s[l-1]-'0';
        for (int j = 0; j < l - 1; ++j) {
            if (bit_i & (1 << j)) {
                ans += s[l-j-2]-'0';
                num = 10;
            }
            else{
                ans += ((s[l-j-2]-'0') * num);
                num *= 10;
            }
        }
    }
    cout << ans << endl;
}


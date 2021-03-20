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
int main(){
    string s;
    cin >> s;
    long long n = stoll(s), ans = 0, x = 9, y=1;
    for(int i = 2; i <= s.size(); i+=2){
        if(i < s.size()){
            ans += x;
        }
        else{
            string zenhan = s.substr(0,i/2);
            long long az = stoll(zenhan);
            ans += (az-y+1);
            zenhan+=zenhan;
            long long a = stoll(zenhan);
            if(a > n)  ans --;
        }
        x *= 10;
        y *= 10;
    }
    cout << ans << endl;
}
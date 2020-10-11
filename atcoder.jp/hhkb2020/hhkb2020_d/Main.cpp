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
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        long long a,b,n;
        cin >> n >> a >> b;
        long long x1,x2,x3,ans;
        x3=(n-a-b+2)*(n-a-b+1)%MOD;
        if((n-a-b)<0) x3=0;
        x2=(n-a+1)*(n-b+1)%MOD-x3;
        if(x2<0) x2+=MOD;
        x1=x2*x2%MOD;
        ans=(n-a+1)*(n-a+1)%MOD*(n-b+1)%MOD*(n-b+1)%MOD-x1;
        if(ans<0) ans+=MOD;
        cout << ans << endl;
    }
}


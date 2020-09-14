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
    long long mod=1000000007,n;
    cin >> n;
    if(n==1) cout << 0 << endl;
    else{
        long long x=1,y=1,z=2;
        for(int i=0; i<n; i++){
            x=(x*10)%mod;
            y=(y*8)%mod;
            z=(z*9)%mod;
        }
        long long ans=x+y-z;
        if(ans<0) cout << mod+ans << endl;
        else cout << ans << endl;
    }
}


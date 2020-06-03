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
    long long n;
    cin >> n;
    long long ans=1;
    const long long mod=1000000007;
    vector<long long> a(n+1);
    for(int i=2; i<=n; i++){
        int number=i;
        for(int j=2; j*j<=i; j++){
            if(number%j==0){
                while(number%j==0){
                    number/=j;
                    a[j]++;
                }
            }
        }
            if(number>1) a[number]++;
    }
    for(int i=2; i<=n; i++){
        ans=ans*(a[i]+1)%mod;
    }
    cout << ans << endl;
}

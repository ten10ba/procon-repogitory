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
    long long n,p;
    cin >> n >> p;
    long long P=p,x=sqrt(p);
    vector<long long> a(x+1);
    for(long long i=2; i*i<=P; i++){
        if(p%i==0){
            while(p%i==0){
                p/=i;
                a[i]++;
            }
        }
    }
    long long ans=1;
    for(long long i=2; i<=x; i++){
        if(a[i]/n>=1){
            for(long long j=1; j*n<=a[i]; j++){
                ans*=i;
            }
        }
    }
    if(n==1) ans*=p;
    cout << ans << endl;
}
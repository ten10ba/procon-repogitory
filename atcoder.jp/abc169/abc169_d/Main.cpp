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
    long long n,ans=0;
    cin >> n;
    long long sqrtn=sqrt(n);
    if(n%2==0){
        long long count=0,x=0;//2で割れる回数，個数
        while(n%2==0){
            n/=2;
            count++;
            if((x+2)*(x+1)/2<=count) x++;
        }
        ans+=x;
    }
    long long N=n;
    for(long long i=3; i*i<=N; i+=2){
        if(n%i==0){
            long long count=0,x=0;
            while(n%i==0){
                n/=i;
                count++;
                if((x+2)*(x+1)/2<=count) x++;
            }
            ans+=x;
        }
    }
    if(n>1) ans++;
    cout << ans << endl;
}
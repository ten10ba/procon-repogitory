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
    long long a,b;
    cin >> a >> b;
    long long A=a, B=b, ans=1,a1=sqrt(A),b1=sqrt(B);
    for(long long i=2; i*i<=max(A,B); i++){
        if(a%i==0 && b%i==0) ans++;
        if(a%i==0){
            while(a%i==0){
                a/=i;
            }
        }
        if(b%i==0){
            while(b%i==0){
                b/=i;
            }
        }
    }
    if(a==b && a!=1) ans++;
    cout << ans << endl;
}
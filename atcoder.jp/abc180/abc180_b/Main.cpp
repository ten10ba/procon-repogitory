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
    long double eps=0.000000000000000001;
    int n;
    cin >> n;
    long long m=0,y=0,c=0;
    for(int i=0; i<n; i++){
        int j;
        cin >> j;
        long long j1=abs(j);
        m+=j1;
        long long JJ=j1*j1;
        y+=JJ;
        c=max(j1,c);
    }
    long double ans=0;
    if(y>1000000000){
        long double a=y/10000;
        ans=sqrtl(a)*100;
    }
    else ans=sqrt(y);
    cout << m << endl;
    cout << fixed << setprecision(20);
    cout << ans << endl;
    cout << c << endl;
}
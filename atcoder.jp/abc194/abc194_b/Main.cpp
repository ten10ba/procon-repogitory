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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    long long inf=10000000,amin1=inf, bmin1=inf,amin2=inf,bmin2=inf,a1,b1,a2,b2;
    for(int i = 0; i < n; i++){ 
        cin >> a[i] >> b[i];
        if(amin1>a[i]) {
            amin2 = amin1;
            a2 = a1;
            amin1 = a[i];
            a1 = i;
        }
        else if (amin2>a[i]) {
            amin2 = a[i];
            a2 = i;
        }
        if (bmin1>b[i]) {
            bmin2 = bmin1;
            b2 = b1;
            bmin1 = b[i];
            b1 = i;
        }
        else if (bmin2>b[i]) {
            bmin2 = b[i];
            b2 = i;
        }
    }
    if(a1==b1) cout << min(amin1+bmin1,min(max(amin1,bmin2),max(amin2,bmin1))) << endl;
    else cout << max(amin1,bmin1) << endl;
}
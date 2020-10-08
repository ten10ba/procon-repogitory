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
    using tsii = tuple<string,int,int>;
    using vi = vector<int>;
    using vvi = vector<vi>;
    using vtsii = vector<tsii>;
    int n;
    cin >> n;
    vtsii x(n);
    for(int i=0; i<n; i++){
        string s;
        int p;
        cin >> s >> p;
        x[i]=make_tuple(s,100-p,i+1);
    }
    sort(x.begin(),x.end());
    for(int i=0; i<n; i++){
        int j;
        tie(ignore,ignore,j)=x[i];
        cout << j << endl;
    }
}


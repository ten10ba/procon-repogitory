#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
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
using namespace std;
int main(){
    long long n,T;
    cin >> n >> T;
    vector<int> t(n);
    long long sum=0;
    for(long long i=0; i<n; ++i){
        cin >> t[i];
        if(i !=0 && t[i]-t[i-1]<T) sum+=(t[i]-t[i-1]);
        else if(i!=0) sum+=T;
    }
    cout << sum+T << endl;
}
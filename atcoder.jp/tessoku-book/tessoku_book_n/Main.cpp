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
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);
    vector<long long> d(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> c[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> d[i];
    }
    vector<long long> x(n * n);
    vector<long long> y(n * n);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            x[i * n + j] = a[i] + b[j];
            y[i * n + j] = c[i] + d[j];
            //cout << x[i * n + j] << " " << y[i * n + j] << endl;
        }
    }
    sort(y.begin(),y.end());
    bool ans = false;
    int l,r,mid; 
    for(int i = 0; i < n * n; ++i){
        r = n * n - 1;
        l = 0;
        mid = (l + r) / 2;
        while(l <= r){
            if((k - x[i]) == y[mid]){
                ans = true;
                break;
            }
            else if((k - x[i]) < y[mid]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
            mid = (l + r) / 2;
        }
        if(ans) break;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
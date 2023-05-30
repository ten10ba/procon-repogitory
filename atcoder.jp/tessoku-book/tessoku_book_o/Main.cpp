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
    vector<long long> a(n);
    vector<long long> b(n);
    vector<int> ans(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    int i = 0, asize = n;
    while(asize - 1 > i){
        if(a[i] == a[i + 1]){
            a.erase(a.begin() + i);
            asize -= 1;
            i -= 1;
        }
        ++i;
    }
    int l,r,mid;
    for(int i = 0; i < n; ++i){
        l = 0;
        r = asize;
        mid = (l + r) / 2;
        while(l <= r){
            if(b[i] == a[mid]){
                cout << mid + 1 << " ";
                break;
            }
            else if(b[i] < a[mid]){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
            mid = (l + r) / 2;
        }
    }
    cout << endl;
    return 0;
}
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
    vector<long long> ruiseki(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) ruiseki[0] = 0;
        else if(i % 2 == 1){
            ruiseki[i] = ruiseki[i - 1];
        }
        else{
            ruiseki[i] = ruiseki[i - 1] + a[i] - a[i - 1];
        }
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        long long L, R;
        cin >> L >> R;
        int l = 0, r = n - 1, mid = (l + r) / 2;
        while(l <= r){
            if(a[mid] == L) break;
            else if(a[mid] < L) l = mid + 1;
            else r = mid - 1;
            mid = (l + r) / 2;
        }
        int il = mid;
        long long lhiki;
        if(il % 2 != 0) lhiki = ruiseki[il + 1] - (a[il + 1] - L);
        else lhiki = ruiseki[il];
        l = 0;
        r = n - 1;
        mid = (l + r) / 2;
        while(l <= r){
            if(a[mid] == R) break;
            else if(a[mid] < R) l = mid + 1;
            else r = mid - 1;
            mid = (l + r) / 2;
        }
        int ir = mid;
        long long rhiki;
        if(ir % 2 != 0) rhiki = ruiseki[ir] + R - a[ir];
        else rhiki = ruiseki[ir];
        cout << rhiki - lhiki << endl;
    }

    return 0;
}

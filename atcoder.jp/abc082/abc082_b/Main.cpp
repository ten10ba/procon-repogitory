#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // long long64_t, long long*_t
#include <cstdio> // prlong longf
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
    string s,t;
    cin >> s >> t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    reverse(t.begin(),t.end());
    int x = min(s.size(),t.size());
    bool ans = 1;
    for(int i=0; i<x; i++){
        if(s[i]>t[i]){
            ans = 0;
            break;
        }
        if(s[i]<t[i]) break;
        else if(i==x-1 && x==t.size()){
            ans = 0;
        }
    }

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}

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
    vector<int> b(n);
    vector<vector<int>> a(n,vector<int>(1,1));
    for(int i=1; i<n; i++) cin >> b[i];
    for(int i=n-1; i>=0; i--){
        if(a[i].size()>1){
            sort(a[i].begin(),a[i].end());
            a[i][0]+=(a[i][1]+a[i][a[i].size()-1]);
        }
        if(i!=0){
            a[b[i]-1].push_back(a[i][0]);
        }
    }
    cout << a[0][0]<< endl;

}
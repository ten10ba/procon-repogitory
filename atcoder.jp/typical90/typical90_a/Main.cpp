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
long long L;
int K, N;
int P(vector<int> &a, int x) {
    int y = 0, pre = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] - pre >= x && L - a[i] >= x){
            y++;
            pre = a[i];
        }
    }
    return y;
}


int main(){
    cin >> N >> L;
    cin >> K;
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    long long left = 0, right = L;
    while(right - left > 1){
        int mid = left + (right - left) / 2;
        if(P(a, mid) < K) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}


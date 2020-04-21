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
using namespace std;

int main(){
    int n,w2=0;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0) w2=1;
    }
    long long ans=0;
    if(w2!=0){
        for(int i=0; i<n; i++){
            if(a[i]!=1){
                int x=log2(a[i]);
                for(int j=0; j<=x; j++){
                    if(a[i]%2==0) a[i]/=2;
                    else{
                        ans+=j;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << endl;

}
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
    int m,n;
    int sum;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(a[n-m]<(sum/(4.0000000*m))){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}
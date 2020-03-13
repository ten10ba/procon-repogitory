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
    int n;
    cin >> n;
    bool ans = true;
    vector<int> x(n+1);
    vector<int> y(n+1);
    vector<int> t(n+1);
    x[0]=0;
    y[0]=0;
    t[0]=0;
    for(int i=0; i<n; i++){
        cin >> t[i+1] >> x[i+1] >> y[i+1];
    }
    for(int i=0; i<n; i++){
        int a = t[i+1]-t[i];
        int x1 = abs(x[i]-x[i+1]);
        int y1 =abs(y[i]-y[i+1]);
        if(a<(x1+y1)){
            ans = false;
            break;
        }
        else if((a%2) != ((x1+y1)%2)){
            ans = false;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
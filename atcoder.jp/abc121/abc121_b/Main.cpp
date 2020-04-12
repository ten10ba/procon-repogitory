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
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        int ans=0;
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            ans+=(a[i][j]*b[j]);
        }
        if(ans+c>0) sum++;
    }
    cout << sum << endl;
}
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
    int txa,tya,txb,tyb,t,v,n;
    bool ans=0;
    cin >> txa >> tya >> txb >> tyb >> t >> v >> n;
    long long maxd=t*v;
    vector<vector<int>> z(n,vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> z[i][0] >> z[i][1];
        double a,b;
        a=sqrt((z[i][0]-txa)*(z[i][0]-txa)+(z[i][1]-tya)*(z[i][1]-tya));
        b=sqrt((z[i][0]-txb)*(z[i][0]-txb)+(z[i][1]-tyb)*(z[i][1]-tyb));
        if((a+b)<=maxd){
            ans=1;
            break;
        }
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;

}
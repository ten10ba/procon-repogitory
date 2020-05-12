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
    int n,m,ans=1;
    string name,kit;
    cin >> n >> m >> name >> kit;
    vector<int> alp(26,0);
    vector<int> alpn(26,0);
    for(int i=0; i<m; i++){
        alp[kit[i]-'A']++;
    }
    for(int i=0; i<n; i++){
        alpn[name[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(alp[i]<alpn[i]){
            if(alp[i]==0){
                ans=-1;
                break;
            }
            else{
                int a=alpn[i]/alp[i];
                if(alpn[i]%alp[i]>0) a++;
                if(ans<a) ans=a;
            }
        }
    }
    cout << ans << endl;
}
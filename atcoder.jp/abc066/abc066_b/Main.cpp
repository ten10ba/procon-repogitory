//(・ω・)
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
using namespace std;

int main(){
    string s;
    cin >> s;
    int a = s.size(),ans=1;
    for(int i=0; i<a-1; i++){
        s.pop_back();
        if(s.size()%2==0){
            for(int j=0; j<s.size()/2; j++){
                if(s[j]!=s[(s.size()/2)+j]) break;
                if(j==(s.size()/2)-1) ans=s.size();
            }
        }
        if(ans!=1) break;
    }
    cout << ans << endl;
}
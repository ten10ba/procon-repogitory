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
const double pi=3.141592653589793238;

int main(){
    string s;
    cin >> s;
    bool ans = 1;
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0){
            if(s[i]-'a' < 0) {
                ans = 0;
                break;
            }
        }
        else{
            if(s[i]-'A' > 25) {
                ans = 0;
                break;
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
} 
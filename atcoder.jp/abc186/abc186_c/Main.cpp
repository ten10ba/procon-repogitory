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
    int n;
    cin >> n;
    int c8 = 0, c10 = 0, c810 = 0;
    for(int i = 1; i <= n; i++){
        bool n10 = 0, n8 = 0;
        int x = i;
        string s10 = to_string(x);
        for(int j = 0; j < s10.size(); j++) {
            if(s10[j] == '7') {
                n10 = 1;
                c10++;
                break;
            }
        }
        stringstream ss;
        ss << oct << x;
        string s8 = ss.str();
        for(int j = 0; j < s8.size(); j++) {
            if(s8[j] == '7') {
                n8 = 1;
                c8++;
                if(n10) c810++;
                break;
            }
        }
    } 

    cout << n - c8 - c10 + c810 << endl;
}
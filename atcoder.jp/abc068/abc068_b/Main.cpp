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
    if(n<2) cout << 1 << endl;
    else if(n<4) cout << 2 << endl;
    else if(n<8) cout << 4 << endl;
    else if(n<16) cout << 8 << endl;
    else if(n<32) cout << 16 << endl;
    else if(n<64) cout << 32 << endl;
    else cout << 64 << endl;
}
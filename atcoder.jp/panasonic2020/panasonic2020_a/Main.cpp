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
    int k;
    cin >> k;
    vector<int> a(32);
    a[0]=1;
    a[1]=1;
    a[2]=1;
    a[3]=2;
    a[4]=1;
    a[5]=2;
    a[6]=1;
    a[7]=5;
    a[8]=2;
    a[9]=2;
    a[10]=1;
    a[11]=5;
    a[12]=1;
    a[13]=2;
    a[14]=1;
    a[15]=14;
    a[16]=1;
    a[17]=5;
    a[18]=1;
    a[19]=5;
    a[20]=2;
    a[21]=2;
    a[22]=1;
    a[23]=15;
    a[24]=2;
    a[25]=2;
    a[26]=5;
    a[27]=4;
    a[28]=1;
    a[29]=4;
    a[30]=1;
    a[31]=51;
    cout << a[k-1] << endl;
}
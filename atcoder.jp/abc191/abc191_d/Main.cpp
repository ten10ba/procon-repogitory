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
    long double x,y,r;
    cin >> x >> y >> r;
    x *= 10000;
    y *= 10000;
    r *= 10000;
    x = roundl(x);
    y = roundl(y);
    r = roundl(r);
    long long count = 0;
    long long xstart = (x-r)/10000;
    if((x - r) > xstart * 10000) xstart++;
    for(long long i = xstart; i <= (r+x)/10000; i++) {
        long double xi = i * 10000, yi;
        yi = sqrt(r*r-(xi-x)*(xi-x));
        long long ymax = (y + yi) / 10000, ymin = (y - yi) / 10000;
        if(y - yi > ymin * 10000) ymin++;
        if(y + yi < ymax * 10000) ymax--;
        if((ymax - ymin) >= 0) count += ((ymax - ymin) + 1);
    }
    cout << count << endl;
}
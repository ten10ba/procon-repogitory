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
#include <ctime>
#include <functional>
#include <cassert>
using namespace std;
const double pi=3.141592653589793238;//三角関数は弧度法

int main(){
    int N,K;
    cin  >> N >> K;
    vector<int> A(N);
    vector<int> Amax(N);
    vector<int> B(N);
    int MAX = 0;
    for(int i = 0; i < N; ++i){
        cin >> A[i];
        if(MAX < A[i]) MAX = A[i];
    }
    bool Ans = 0;
    for(int i = 0; i < K; ++i){
        cin >> B[i];
        if(A[B[i] - 1] == MAX){
            Ans = 1;
            break;
        }
    }
    if(Ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}


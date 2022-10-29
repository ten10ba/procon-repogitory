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
    vector<vector<char>> s(9,vector<char>(9));
    vector<pair<int,int>> sharp;
    int n = 0;
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            cin >> s[i][j];
            if(s[i][j] == '#'){
                sharp.push_back(make_pair(i,j));
                n++;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < n - 3; ++i){
        for(int j = i + 1; j < n - 2; ++j){
            for(int k = j + 1; k < n - 1; ++k){
                for(int l = k + 1; l < n; ++l){
                    int ij1 = sharp[i].first-sharp[j].first;
                    int ik1 = sharp[i].first-sharp[k].first;
                    int jl1 = sharp[j].first-sharp[l].first;
                    int kl1 = sharp[k].first-sharp[l].first;
                    int ij2 = sharp[i].second-sharp[j].second;
                    int ik2 = sharp[i].second-sharp[k].second;
                    int jl2 = sharp[j].second-sharp[l].second;
                    int kl2 = sharp[k].second-sharp[l].second;
                    if((ij1 == kl1) && (ij2 == kl2) && (ik1 == jl1) && (ik2 == jl2)){
                        if(((ij1 == -jl2) && (ij2 == jl1)) || ((ij1 == jl2) && (ij2 == -jl1))){
                             ans ++;
                        }
                    }
                }
            }
        }
    }
    cout << ans << endl;
}
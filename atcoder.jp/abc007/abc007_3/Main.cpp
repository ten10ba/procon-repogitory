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
int main(){
    int R,C;
    cin >> R >> C;
    int sy,sx,gy,gx;
    cin >> sy >> sx >> gy >> gx;
    vector<vector<char>> c(R,vector<char>(C));
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++) cin >> c[i][j];
    }
    vector<vector<int>> dist(R,vector<int>(C,-1));
    queue<pair<int,int>> q;
    dist[sy-1][sx-1]=0;
    q.push(make_pair(sy-1,sx-1));
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int py=p.first,px=p.second;
        int dy[4]={-1,0,0,1};
        int dx[4]={0,-1,1,0};
        for(int i=0; i<4; i++){
            if(c[py+dy[i]][px+dx[i]]=='#' || dist[py+dy[i]][px+dx[i]]!=-1) continue;
            else{
                dist[py+dy[i]][px+dx[i]]=dist[py][px]+1;
                q.push(make_pair(py+dy[i],px+dx[i]));
            }
        }
        if(dist[gy-1][gx-1]!=-1) break;
    }
    cout << dist[gy-1][gx-1] << endl;
}


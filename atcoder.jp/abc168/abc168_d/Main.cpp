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
using Graph =vector<vector<int>>;
int main(){
    int n,m;
    cin >> n >> m;
    Graph g(n+1);
    vector<vector<int>> ab(m,vector<int>(1));//a,b
    for(int i=0; i<m; i++){
        int a,b;
        cin >> ab[i][0] >> ab[i][1];
        a=ab[i][0];
        b=ab[i][1];
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> dist(n+1,-1);
    queue<int> que;
    dist[1]=0;
    que.push(1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int nv : g[v]){
            if(dist[nv] != -1) continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    bool ans=true;
    vector<int> to(n+1);
    for(int i=0; i<m; i++){
        int a,b;
        a=dist[ab[i][0]];
        b=dist[ab[i][1]];
        if(abs(a-b)>1){
            ans=false;
            break;
        }
        else{
            if(a>b) to[ab[i][0]]=ab[i][1];
            else if(b>a) to[ab[i][1]]=ab[i][0];
        }  
    }
    if(ans){
        cout << "Yes" << endl;
        for(int i=2; i<=n; i++){
            cout << to[i] << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
}
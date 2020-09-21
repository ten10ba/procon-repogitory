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
//substr(10,4)は左から11~14番目
//substr(2)は左から3番目〜最後
//max({a1,a2,a3})
//*max_element(c+1,c+10)は配列の1番目から9番目
//大きい順にソートsort(a.begin(), a.end(), greater<int>());
//10と近い順にソートsort(a.begin(), a.end(), cmp);sort(a.begin(), a.end(), 10);
//乱数rand()おまじないsrand((unsigned)time(NULL));mt19937
//clock()で実行時間(10^{-6}秒)
// int 型の要素を持ち、最も小さい値を取り出す形の priority_queue を定義する場合priority_queue<int, vector<int>, greater<int>> Q;
// string 型の番地に double 型の変数を記録する場合map<string, double> M;
//lower_bound(a+l, a+r, x) - aa[l] から a[r-1] までの中で初めて x 以上となるようなインデックスを返す
//upperboundはxより大きいなので，xとなる個数はupper_bound-lower_bound
//set.lower_bound(x)集合 a の中で x 以上である最小の要素を指すイテレーターを返す
//count(v.begin(), v.end(), x)xがいくつ含まれるかfindは含まれなければa.end()，含まれるときは最初のイテレーター
//next_permutation(a, a + n)次の順列の作成
//__builtin_popcount(x)xを2進数で表した時に1である様なビットの個数を返す関数
//長さ 8 の bitset を定義する。整数から初期化を行う。
//bitset<8> bs2(131); // 7 ビット目から 0 ビット目への順番で、10000011 となる。
//bitset<8> bs3("10000011"); // 7 ビット目から 0 ビット目への順番で、10000011 となる。
//a.set(x)2^xの位を1に．a.reset(x)2^xの位を0に，a[i]2^iの位にアクセス
int main(){
    int h,w,n;
    cin >> h >> w >> n;
    vector<vector<char>> c(h,vector<char>(w));
    vector<pair<int,int>> fac(n);
    pair<int,int> st;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> c[i][j];
            if(c[i][j]=='S'){
                st = make_pair(i,j);
            }
            else if(c[i][j]!='.' && c[i][j]!='X'){
                fac[c[i][j]-'1']=make_pair(i,j);
            }
        }
    }
    int num=0;
    int dis=0;
    for(int i=0; i<n; i++){
        vector<vector<int>> dist(h,vector<int>(w,-1));
        queue<pair<int,int>> q;
        q.push(st);
        dist[st.first][st.second]=dis;
        pair<int,int> goal=fac[i];
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int ph=p.first,pw=p.second;
            int dh[4]={-1,0,0,1};
            int dw[4]={0,1,-1,0};
            for(int j=0; j<4; j++){
                int H=dh[j]+ph,W=dw[j]+pw;
                if(H<0 || W<0) continue;
                else if(H>=h || W>=w) continue;
                else if(dist[dh[j]+ph][dw[j]+pw]!=-1 || c[dh[j]+ph][dw[j]+pw]=='X') continue;
                else{
                    dist[dh[j]+ph][dw[j]+pw]=dist[ph][pw]+1;
                    q.push(make_pair(dh[j]+ph,dw[j]+pw));
                }
            }
            if(dist[goal.first][goal.second]!=-1) break;
        }
        st=goal;
        dis=dist[goal.first][goal.second];
    }
    cout << dis << endl;
}


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
    int n;
    long long m;
    cin >> n >> m;
    vector<long long> p(n+1,0);
    for(int i=0; i<n; i++) cin >> p[i];
    vector<long long> p2;
    for(int i=0; i<n+3; i++){
        for(int j=i+1; j<n+4; j++){
            p2.push_back(p[i]+p[j]);
        }
    }
    sort(p2.begin(),p2.end());
    long long ans=0;
    int num=p2.size();
    for(int i=0; i<num; i++){
        if(m-p2[i]<0) break;
        long long x=m-p2[i];
        int a,b;
        a=lower_bound(p2.begin(),p2.end(),x)-p2.begin();
        b=upper_bound(p2.begin(),p2.end(),x)-p2.begin()-1;
        if(a==b){
            ans=max(ans,p2[i]+p2[a]);
        }
        else{
            ans=max(ans,p2[i]+p2[a-1]);
        }
    } 
    cout << ans << endl;
}


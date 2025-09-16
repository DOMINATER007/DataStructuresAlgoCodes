#include <bits/stdc++.h>
// #include "atcoder/convolution.hpp"
// #include "atcoder/dsu.hpp"
// #include "atcoder/fenwicktree.hpp"
// #include "atcoder/lazysegtree.hpp"
// #include "atcoder/math.hpp"
// #include "atcoder/maxflow.hpp"
// #include "atcoder/mincostflow.hpp"
// #include "atcoder/modint.hpp"
// #include "atcoder/scc.hpp"
// #include "atcoder/segtree.hpp"
// #include "atcoder/string.hpp"
// #include "atcoder/twosat.hpp"

using namespace std;
//using namespace atcoder;
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")  

#define ll long long
#define pb push_back
#define F first
#define S second
#define I insert
#define ull unsigned long long
typedef long double lld;
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define mem(x,v) memset(x,v,sizeof(x))
#define inp(v,n) loo(i,n){cin>>v[i];}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";cerr<<"\n";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";cerr<<"\n";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";cerr<<"\n";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";cerr<<"\n";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {cerr<<"{"<<i.F<<" "<<i.S<<"} ";} cerr << "]";cerr<<"\n";}


#define vll vector<ll>
#define vdd vector<double>
#define vss vector<string>
#define vpl vector<pair<ll,ll>>
#define vcl vector<char>
#define vvl vector<vector<ll>>
#define vvc vector<vector<char>>
#define ppi pair<ll,ll>
#define maxe(v) *max_element((v).begin(),(v).end());
#define mine(v) *min_element((v).begin(),(v).end());
#define loo(i,n) for(long long i=0;i<n;i++)  
#define sor(v) sort(v.begin(),v.end());
#define pyes cout<<"YES\n";
#define pno cout<<"NO\n";
#define ayes cout<<"Yes\n";
#define ano cout<<"No\n";
#define mll map<ll,ll>
#define mcl map<char,ll>
#define mod 1000000007
#define ft front()
#define bk back()
#define pf push_front
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define lb lower_bound
#define ub upper_bound
#define each(a,x) for(auto a:x)  
#define nl cout<<"\n";
#define pri(xx) cout<<xx<<"\n";
#define sll set<ll>
#define sch set<char>
#define rt return
#define sz(x) x.size()
#define pq priority_queue
#define pql priority_queue<ll>
#define INF 1e9
#define manh(a,b,c,d) abs(a-c)+abs(b-d)
#define euc(a,b,c,d) sqrt((a-c)*(a-c)+(b-d)*(b-d))
#define foo(i,a,b) for(ll i=a;i<b;i++)
#define pril(i,a,b,v) foo(i,a,b){cout<<v[i]<<" ";}
#define pqc priority_queue<char>
#define to_upper(s)  transform(s.begin(), s.end(), s.begin(), ::toupper);
#define lowercase(s)  transform(s.begin(), s.end(), s.begin(), ::tolower);

vvl prefx2(vvl &v){
  ll n=v.size(),m=v[0].size();
  vvl pre=v;
  loo(i,n){
    loo(j,m){
      pre[i][j]+=((i-1>=0 ? pre[i-1][j] : 0)+(j-1>=0 ? pre[i][j-1] : 0)-((i-1>=0 and j-1>=0) ? pre[i-1][j-1] : 0));
    }
  }
  return pre;
}
ll preQ2(ll x,ll y,ll a,ll b,vvl &pre){
  return pre[a][b]-((x-1>=0) ? pre[x-1][b] : 0)-((y-1>=0)? pre[a][y-1] : 0)+((x-1>=0 and y-1>=0) ? pre[x-1][y-1] : 0);
}

vll prefx(vll &v){
  vll pre=v;
  loo(i,pre.size()) pre[i]+=(i-1>=0 ? pre[i-1] : 0);
  return pre;
}
ll preQ1(ll l,ll r,vll &pre){
  return (pre[r]-(l-1>=0 ? pre[l-1] : 0));
}


/*  //SNIPPET LIST 
  // 1)segtree  
   -(used to build a segment tree and to solve range based queries and point update)
   2)freqidblocks
   -(in a vector we can find number of increasing and decreasing subsegment)
   3)UNIV -(gives unique vector no duplicates)
   4)levaltraversalTree
   5)bpow
   6)sttoi
   7)commonsubstring2chr
   8)factorstore-(stores all the factors of a num)
   9)issubstring
   10)perfectSqorNot
   11)seivestore
   12)precompfac -(factorial)
   13)range overlap 

   14)countfreqcontinuos  -(ex--> v=(1,1,1,2) return vpl={{1,3},{2,1}})

   15)getMaxContifreq -(same as above but gives maximum of all same number)
   (ex---> v=(1,1,2,1,1,1) return freq freq[1]=3 & freq[2]=1 and all other 0)

   16)DSU*snipp ------->(Contains all functions of dsu like unite, find par) (***imp***)

   17)lpf for lowest prime factor snippet lps[i]--->lowest prime factor of i

   18)LPS of a string ---->Longest proper sufix which is also a prefix, return a vector of that lenth for every char

   19)KMP algo-------->takes string s,p as attr and gives starting occurences of p in s as vector

   20)zFunction--------->Gives Z array of a string (starting from index i how much is equal to prefix type question)

   21)Range Update Point query Push down type query (RUPU_PUSHDOWN)-------->Used to give answer range update questions no lazy and after updating a node in segment tree we need to Propagate the result to lower nodes
   (Knight tournament in cf best example)

   22) kth Segment tree ---> Its simply ordered set implementation via segment trees and used for questions of type Queue Construction in leetcode


  23)   **********STACK RELATED ALL SNIPPETS************
          1)NGER--->Next greater elemnt to right for every elemnt in array
          2)NGEL--->Next greater elemnt to left for every elemnt in array
          3)NLEL--->Next leeser elemnt to right for every elemnt in array
          4)NLER---->Next lesser element to left for every elemnt in array and also gives position of that least elemnt  (this one only returns vpl).
          5)

  24) Trie implementation--> Gives a template for string trie problems    

  25) LinearDioEquation ----->Gives Linear DIophantine equation Snippet (ex: ax+by=c if c%gcd(a,b)==0 then there exists a solution which can be found and using this one solution we find all other solutions)    

  26) EulerTotientFunction-------> Gives no of integers that are relatively prime with n in log(n) 
                                    phi(n). ex phi(10)=4 (2,3,7,9).

  27) RabinMillerTest to find Primes less than 1o^18 in log(n) complexity 
              (HERE MULTIPLICATION is in o(1))     and also checks prime or not in log(n)     

  28) LcmOfArray-----> Gives the lcm of the array using primes fact method o(nlogn)                                 

  29) Check_N_as_Sum_Of_Two_Squares----> can check whether a given n can be expressed as sum of squares
                                        i.e n=a^2+b^2 on O(1) (precomputation)

  30) manacherAlgo ---> to get longest palindrom or s[l..r] is pal or not
  31) contrbAsMaxMin --->for every element in array we can calculate its contrib as max / min in a subarray   
  32) SumOfNumberOfDistNumOfAllSubarrays ----> gives summ(number of distinct numbers in all subarrays)    ex:(1,1,2)   -->[(1),(1),(2),(1,2),(1,1),(1,1,2)] 1+1+1+2+1+2=7      
  33) custom_comparator  ---> Comparator function for priority queues     
  34) LisEndingAt ----> takes an array and returns dp array giving max lis length at that point (via segment tree compression)
   (*******Also can be used to know max lis achieve if we start at a point********)      
  35) k_sizeWindowRollingMedian snippet -----> used to find ,edian of every k sized subbarray in an array using two multisets(very very good model)                   
  36) Serial bit operations snippet where you can find (or xor and in log(n)) for a range l to r
  37) LucasTheorem ----> gives (ncr) modulo p  , p is prime 
  TC: O(plogn basep)
  38) BinaryLiftingLCA ---> Give LCA (u,v) in LOGN
  39) PathAggregates1 ---> Given node values instead of edge weights then you can get path_op(u,v)
  40) PathAgrregates2 ---> Given edge wieights then use pushdown method
   */



vpl movmt1={{0,1},{1,0},{-1,0},{0,-1}};
vpl movmt2={{0,1},{1,0},{-1,0},{0,-1},{1,-1},{-1,-1},{1,1},{-1,1}};

bool isvalid(ll x,ll y,ll n,ll m){
  return (x>=0 and x<n and y>=0 and y<m);
}

// using mint1=modint1000000007;
// using mint2=modint998244353;


/*ll MAXN = 2000005;


vector<mint> fact(MAXN),inv_fact(MAXN);

void precompute_factorials() {
    fact[0] = 1;
    for (ll i = 1; i < MAXN; i++) {
        fact[i] = fact[i - 1] * i;
    }
    inv_fact[MAXN - 1] = fact[MAXN - 1].inv(); // Use modll's inv() for modular inverse
    for (ll i = MAXN - 2; i >= 0; i--) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1);
    }
}


mint nCr(ll n, ll r) {
    if (r > n || r < 0) return 0;
    return fact[n] * inv_fact[r] * inv_fact[n - r];
}


mint nPr(ll n, ll r) {
    if (r > n || r < 0) return 0;
    return fact[n] * inv_fact[n - r];
}*/

// __builtin_popcount  Count 1-bits (int)
// __builtin_popcountll  Count 1-bits (long long)
// __builtin_clz Count leading zeros (int)
// __builtin_clzll Count leading zeros (long long)
// __builtin_ctz Count trailing zeros (int)
// __builtin_ctzll Count trailing zeros (long long)
// __builtin_parity  Parity of bits (int)
// __builtin_parityll  Parity of bits (long long)
// __builtin_ffs 1-based index of least significant 1

void madara(){
  


  
  
  
  
 
}
    

  
  
  




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif 
  ll ashish;
  cin>>ashish;
  while(ashish--){
      madara();
  }
  return 0;

}




/*
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++*%*+++++++++++++++++#++++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++*%%#*+++++++#*+++++#%*+++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++*%%%%%#+++++*%#+++*%%#+++++++++++++++++++++++++++++++++++++++++
+++++++++++++++++++++++++++++++++++++++++++*%%%%%%%*+++%%%*+%%%%*++++++++++++++++++++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++++++++++#%%%%%%%%%**%%%#%%%%#+++++++++++*#%%#++++++++++++++++++++++++
++++++++++++++++++++++++++++++++*************#%%%%%%%%%%%%%%%%%%#++++**##%%%%%*+++*#*++++++++++++++++++++
+++++++++++++++++++++++++**#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#**#%%%%*+++++++++++++++++++++
+++++++++++++++++++++++++***#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@%%%%%%%%%*++++++++++++++++++++++
++++++++++++++++++++++++++++++++*#%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*+++++++++++++++++++++++
++++++++++++++++++++++++++++++++++++*%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*+++++++++++++++++++++++++
+++++++++++++++++++++++++++++++*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*++++++++++++++++++++++++++
++++++++++++++++++++++++++++#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#*++++++++++++++++++++++
++++++++++++++++++++++++*#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###*++++++++++++++
+++++++++++++++++++++*#%%%%@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#****+++++++++++++++++++
++++++++++++++++++*#%%%%##*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*#%%%%%%%%%%%%%%%%#+++++++++++++++++++++
++++++++++++++++*%#**+++#%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*-=@%%%%%%%%%%%%%%%%%*+++++++++++++++++++
+++++++++++++++++++++*#%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*---*@%%%%%%%%%%%%%%%%%#++++++++++++++++++
+++++++++++++++++++*%%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#----=@@%%%%%%%%%%%%%%%%%%#++++++++++++++++
+++++++++++++++++#%%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%#-----++@@%%%%%%%%%%%%%%%%%%%*++++++++++++++
++++++++++++++*#%%%%@@%#%%%%%%%%%%%%%%%%@%%%%%%%@@%%%%%%%%%%#=----+--%@%%%%%%%%%%%%%%%%%%%%%*++++++++++++
++++++++++++#%%%%%#**+#%%%%%%%%%%%%%%%@@%%%%%%@@@%%%%%%%@%%@=-=****+=*@@%%%%%%%%%%%%%%%%%%%%%#+++++++++++
+++++++++*%%%%#*+++++#%%%%%%%%%%%%%%@@@%%%%%@@@@%%%%@%%%%%%==#+%@@@*=+@@@%%%%%%%%%%%%%%%%%%%%%%#+++++++++
++++++++++++++++++++%%%%%%%%%%%%%%@@@%%%%%@@@@@@%%%@%%#+%%+--#=-=+#*=-#@@@%%%%%%%%%%%%%%%%%%@%%%%#++=++++
++++++++++++++++++*%%%%%%%%%%%%%@@@@%%%%@@@@@@@%%%@@%%+#%*---+=-=+++==+@@@@%%%%%%%%%%%%%%%%%%%@%%%%%*+===
+++++++++++++++++*%%%%%%%%%%%%@@@@@%%%@@@@@@@@%%%@@%%==%*----+=-------+@@@@@%%%%%%%%%%%%%%%%%%%%#*#%%%#*+
++++++++++++++++*%%%%%%%%%%%%@@@@@%%@@@@@@@@@%%%@@%%+-=%-=+==#-+-----=#@@@@@@%%%%%%%%%%%%%%%%%%%%%#+++*#%
+++++++++++++++*%%%%%@%%%%%@@@@@@%@@@@@@%%%%%%%@@@%+--=----==---=----=%@@@@@@%%%%%%%%%%%%%%%%%%%%%%%*++++
++++++++++++++*%%%%@%%%%%%@@@@@@@@@%########%@@@@%*--------------+---+@@@@@@@@%%%%@@%%%%%%%%%%%%%%%%%%+==
++++++++++++++%%%@%#%%%%@@@@@@@@%###########%@@@%#----====++==---+--=%@@@@@@@@@%%%%@%%%%%%%%%%%%%%%%%%%#=
+++++++++++++%%%@#*%%%%@@@@@@@##############%@@@#----=--------*--+--#@@@@@@@@@@@%%%@@%%%%%%%%%%%%%%%%%%%%
++++++++++++#%%%**%%%@@@@@@@################@@@%+=------===+-----==#@@@@@@@@@@@@@%%%@@%%%%%%%%%%%%%%%%%%%
+++++++++++*%%#++%%%@@@@@@%#################%%@+===--------------+%@@@@@@@@@@@@@@@%%@@@%%%%%%%%%%%%%%%%%%
++++++++++*%%*++#%%@@@@@@%##################*%#*=====-----------+@@@@@@@@@###@@@@@@%%@@@%%%%%%%%%%%%%%%%%
++++++++++##++++%%@@@@@@@%#########%%######%+#==**=====--------*@@@@@@@@@@####@@@@@@%@@@@%%%%%%%%%%%%%%%%
+++++++++++++++*%@@@@@@@@##################%======*+======---=*@@@@@@@@@%%####@@@@@@@%@@@@%%%%%%%%%%%%%%%
+++++++++++++++%@@@@@@@@@###################========+********+*@@@@@%%%%%%####@@@@@@@@@@@@@@%%%%%%%%%%%%%
++++++++++++*#%%#####%%@@%#################%#%%%%%%%%%%%%#*+==#%%%%%%%%%%%####@@@@@@@@@@@@@@@%%%%%@%%%%%%
++++++++*#%##################%%%##########%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%####%@@@@@@@@@@@@@@@@@%%%%@%%%%%
+++++*############################%%%#####%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%####@@@@@@@@@@@@@@@@@@@%%%%@@%%%
++*##############################%%%%%%%%####%%%%%%%%%%%%%%%%%%@%%%%%%%%%####@@@@@@@@@@@@@@@@@@@@@%%%@@@%
*#############################%%%@%%%@%*########%%%%%%%%%%%%%%%@%%%%%%%%#####@@@@@@@@@@@@@@@@@@@@@@%%@@@@
%%%%%%%%%%%%%#*%%%%%%#######%%%@%%%@%###*##########%%%%%%%%%%%%@%%%%%%%%#####@@@@@@@@@@@@@@@@@@@@@@@@%@@@
###########*+######%%%%%%%%%%%%%@%#######*############%%%%%%%%%@%%%%%%%%######%%%@@@@@@@@@@@@@@@@@@@@@@@@
##########+###########%%%%%%%%%%#########%*#############%%%%%%%@%%%%%%%@####%%######%@@@@@@@@@@@@@@@@@@@@
########%%##########%%%%%%%%@%#############+##############%%%%%%%%###*#%%@%#############%@@@@@@@@@@@@@@@@
##################%%@%@%%%%%#%##############+########################+*%%%%%%%############%@@@@@@@@@@@@@@
################%%@%%@%%%%####%#######%%%%%%%%%%%%%%%%%%%%%%#########++%#%%%%%%%#############%@@@@@@@@@@@
##############%%%@%@%%%%######%%#####%##########################%%%%%*+%###%%%%%#%%############@@@@@@@@@@
###########%%%%@%%%%#########%%###%%%##################################%%%%##%%%%%##%##########%%@@@@@@@@
%%%%%%%%%%%%%%%%%%######%%##%%%%%%##%%######################################%%%%%%%%%##%#######%*%####%@@
%%%%%%%%%%%%%%%%%#####%%%@@%%%%###%%#%%####%%%%%#%############################%%##%%%%%#######%##*######%
%%###%%%%%%%%@%%#####%%#########%%#%%##%########*%########%%%@%%%######%#%#####%###%%%%%@####%###########
#######%%%%%%%%%#######%%%@@@%%%##%%#%%%%%%%%%%######################%%%%%######%###%%%%%%@%#%%%#%#######
####%##%%%@%%%%%%%%###%%%%%%%%%%%%%############%%########################%###%%%%%###%%%%%%%%@%%%########
##%%#%%%@%%%%%%%%%%%%%%%##########################@%%%%#%%%###########%%%########%####%%%@%%%%%%%%%#%####
#%%%%%%%%%%%%%%%%%%##########################################--------=+*####%#####%###%%%%%%%%%%%%%%##%##
%%%%%%%%%%%%%%%###############################################+-----------+%%%%####%%##%%%%%%%%%%%%%%%###
%%@%%%%%%%%%###################################################*-----------+%%%%####%%#%%%%%%%%%%%%%%%@%#
%%%%%%%%%%#####################################################%+---========%%%%%#####%%%%%%%%%%%%%%%%%@%
@%%%%%%%%#####################################################%%+===*#*+====#%%%%%%#%%%%%%%%%%%%%%%%%%%%%
%%%%%%%#############################################%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%#####%@%%%%%######%%@
%%%%%#############################################%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%#############
%%%%%###########################################%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##############
%%%%%%#########################################%%%%%%%%%@%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###############
%%%%%%########################################%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##############
%%%%%%%#####################################%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%############
%%%%%%%###################################%%%%%%%%%@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###########
%%%%%%%%################################%%%%%%%%@@%%%%%%%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#########
%%%%%%%%##############################%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#######
%%%%%%%%%##########################%%%%%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%######
#%%%%%%%%%######################%%%%@%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%#####
+%%%%%%%%%%##################%%%@@%%%%%%%%@%%%%%%%%%%%%@%%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%####
+*%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###
+++%%%%%%%%%%%%%%%%%%%@@%%%%%%%@%%%%%%%%%%%%%@%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%%%%%%%###
++++*%%%%%%%%%%%%%@%%%%%%%%%%%@%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%###
++++++*#%@%%@%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%@%%%%%#########%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%##
++++++++*%%%%%%%%%%%%%%%%%@%%%%%%%%%%%%%%%%%%%#%#%######################%%%%%%%%%%%%%%%%%%@@%%%%%%%%%%###
++++++++*%%%%%%%%%%%%%@@%%%%%%%%%%%%%%%%%%#####%%#############################%%%%%%%%%%%%%%%%%%@%%%#####
++++++++*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%########%%#################################%%%%%%%%%%%%%%%%%%%%%%%
+++++++++%%%%%%%%%%%%%%%%%%%%%%%%%%%#########%%%%%%%%%%%%%%%##########################%%%%%%%%%%%%%%%%%%%
+++++++++#%%%%%%%%%%%%%%%%%%%%%%####%%%%%######%%################%%%%%%##################%%%%%%%%%@%%%%%%
+++++++++*%%%%%%%%%%%%%%%%%%%%%%%###############%########################%%%%############%%%%%%%%%@%%%%%%
++++++++++%%%%%%%%%%%%%%%%%%#####################%############################%%%%#############%%%@%%%%%%
+++++++++#############%%##########################%################################%%%###########%%%##%%%
+++++++++##########%%############################%#####################################%%#########%#+++++
++++++++*#######%%##############################%#######*%################################%%########+++++
++++++++*#####%%#############%%%%%###%%%%##############%+#%%%%%%%%###########################%%####%+++++
++++++++####%########*#%%%##########@%%%#################*############%%%%#####################%%##%+++++
++++++++##%########%#*%###########%#@%%%%####################################%%%#################%%%*++++
++++++++%%######%%##*############%%@@%%%%##########################################%%#%############%*++++
+++++++######%%####*+###########%#@%%@%%%%##########%###################################%############++++
+++++++####%##################%%#%%%%@%@%%##########%#%#################################%##%#########++++
++++++*##%###################%%%%%%%%%@%%%%##########%%%%%%%%%%%##############################%%#####++++
++++++*%######################%%%%%%%%%%%%%##%%%%%%%%%%%%%%##@%@%%%%%%%%%%%%####################%%##%#*++
+++++*#####################%%@%%%%%%%%%%%%%%%%%%%%%%#######%*%#################%%%%###############%#%%%%#
++++%#######%%%%%%%%%%%%%%%%%%%%%%%%%%%@%%%@@%%#########################################%%###%####%%%%%%%
++*%%%%%%#*%%%%%%%%%%%%%%%%@%%%%##%%%%%%@%@%%%%##############################################*%%###%@@%%%
+#%%%%%%#*%#########%%@%%%%%%%%####%%%%%%%@%%%%%#################################################%%%%%%%%
########*###########%%%@%@%%%%######%%%%%@@%%%%%####################################################%%%%%
##################%@%%@@%%%%%#######%%%%%%%@%%%%%##################%###################################%%
#################%@%%%%%%%%%%########%%%%%%%@%%%%%%%%%%%%%%%%%%%%%%%*%%%%%%%%###########################%
###############%%@%%@%%%%%%%#########%%%%%%%%%%%%%%%%%%%%%%%########*#################%%%%%%%%%%%##%%%###
##############%%%%%%%%%%%%%###########%%%%%%%@%%%%@%%%%#############################################**%%%

*/













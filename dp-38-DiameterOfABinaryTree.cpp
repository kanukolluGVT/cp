#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define REP_(i,n) for (int i=0;i<=n;i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>6
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define w(x) int x;cin>>x; while(x--)
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;

void dfile()
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
}

struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;
};


int solve(Node* root,int& res)
{
    if(root==NULL) return 0;
    int l=solve(root->left,res);
    int r=solve(root->right,res);

    int temp=max(l,r);
    int ans=max(temp,l+r+1);
    res=max(res,ans);
    return temp;

}


int main ()
{

    dfile();
    
    //cout<<"hello"<<endl;
    int res=INT_MIN;
    solve(Node,res);
    return res;
   



    
    return 0;
}



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
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        data=data;
        left=right=NULL;
    }
};

vector<int> solve(Node* root)
{
    if(!root) return {0,0};
    vector<int> a=solve(root->left);
    vector<int> b=solve(root->right);
    if(a[0]>b[0]) return {a[0]+1,a[1]+root->data};
    if(a[0]<b[0]) return (b[0]+1,b[1]+root->data);
    else return {a[0]+1,max(a[1],b[1])+root->data};
}

int sumOfLongRootToLeafpath(Node* root)
{
    vector<int> ans=solve(ans);
    return ans[1];
}


int main ()
{

    dfile();
    cout<<"hello"<<endl;
    
    return 0;
}

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

int t[101][101];

int LongestCommonSubsequence(string x,string y,int m,int n)
{
    //cout<<"hiai";
    for(int i=0;i<m+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i==0 || j==0)
            {
                t[i][j]=0;
            }
            if(x[i-1]==y[j-1])
            {
                t[i][j]=(1+t[i-1][j-1]);  //x[m-1]==y[n-1]->1+lcs(x,y,m-1,n-1);
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }

    }
    //cout<<"hey";
    cout<<t[m-1][n-1];
    return 0;

}

int main ()
{

    dfile();
    memset(t,0,sizeof(t));
    
    //cout<<"hello"<<endl;
    //recursive code base condition top down initialisation
    //m==0||n==0 return 0
    // in for loop if i==0 or j==0 t[i][j]=0
    string x,y;
    cin>>x;
    cin>>y;
    //memset(t,-1,sizeof(t));
    int m=x.length();
    int n=y.length();
    LongestCommonSubsequence(x,y,m,n);
    



    
    return 0;
}



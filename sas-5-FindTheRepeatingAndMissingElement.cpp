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

int *findTwoElement(int *arr,int n)
{
    int a,b;
    REP_(i,n){
        if(arr[abs(arr[i])-1]<0)
        {
            a=abs(arr[i]);
        }
        else{
            arr[abs(arr[i])-1]=-arr[abs(arr[i]-1)];

        }
    }
    REP_(i,n)
    {
        if(arr[i]>0){
            b=i+1;
            break;
        }
    }
    int *v = new int[2];
    v[0]=a;
    v[1]=b;
    return v;
}

int main ()
{

    dfile();
    //cout<<"hello"<<endl;
    
    return 0;
}

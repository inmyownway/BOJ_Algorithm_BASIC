#include <iostream>
#include <vector>
long long d[101][10];
long long m= 1000000000;

using namespace std;
int main()
{
    int n;
    cin>>n;


    for(int i=1;i<=9;i++)
    {
        d[1][i]=1;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=9;j++)
        {
            d[i][j]=0;
            if(j-1>=0)
            {
                d[i][j]+=d[i-1][j-1];
            }
            if (j+1 <= 9) 
            {
                d[i][j] += d[i-1][j+1];
            }
            d[i][j]%=m;
            
        }
    }
    long long sum=0;
    for(int i=0;i<=9;i++)
    {
        sum+=d[n][i];   
    }
    sum%=m;
    cout<<sum<<'\n';
    return 0;
}




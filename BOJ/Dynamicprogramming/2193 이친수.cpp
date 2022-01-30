#include <iostream>

using namespace std;


long long d[91][2];
int main()
{
   int n;
   cin>>n;

    d[1][1]=1;
    d[1][0]=0; 

    for(int i=2;i<=n;i++)
    {   
        for(int j=0;j<=1;j++)
        {   
            d[i][j]=0;
            
           
            if(j==0)
            {
                d[i][j]+=d[i-1][1]+d[i-1][0];
            }
            if(j==1)
            {
                d[i][j]+=d[i-1][0];
            }
        }


    }
    long long sum=0;
    for(int i=0;i<2;i++)
    {
     sum+=d[n][i];
    }
    cout<<sum<<"\n";


    return 0;

}




#include <iostream>
#include <vector>

using namespace std;
int v[1001];
int d[1001];
int main()
{

   
    int n;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        v[i]=in;

    }
    for(int i=0;i<n;i++)
    {  
        d[i]=1;
        for(int j=0;j<i;j++)
        {
            if(v[j]<v[i] && d[j]+1 > d[i])
            {
                d[i]=d[j]+1;
            }
        }
    }
    int max=0;
 
    for(int i=0;i<n;i++)
    {
        if(max<d[i])
            max=d[i];

    }
    cout<<max;
    return 0;
}
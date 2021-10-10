
#include <iostream>
using namespace std;
int a[1000000];
int d[1000000];

int main()
{
 
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        a[i]=input;
    }
    
    for(int i=0;i<n;i++)
    {
        d[i]=a[i];
        if(i==0)
            continue;
        if(d[i]<d[i-1]+a[i])
            d[i]=d[i-1]+a[i];
    }
    
    int max=d[0];
    for(int i=1;i<n;i++)
    {
        if(max<d[i])
            max=d[i];
    }
    cout<<max<<endl;
}


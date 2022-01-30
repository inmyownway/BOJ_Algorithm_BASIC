#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    vector<int> v;
    
    int n;
    cin>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++)
    {
       int in;
       cin>>in;
       v.push_back(in);
    }
    
    for(int i=0;i<n;i++)
    {   
        
        d[i]=v[i];
        if(i==0)
            continue;
        if(d[i-1]+v[i]>d[i])
            d[i]=d[i-1]+v[i];
            
    }
    
    int max = *max_element(d.begin(), d.end());
    cout<<max;
    return 0;

}

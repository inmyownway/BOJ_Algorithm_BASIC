
#include <iostream>
using namespace std;
int a[1000];
int d[1000];
int main()
{
 

    int na;
    
    cin>>na;
   
    for(int i=0;i<na;i++)
    {
        int input;
        cin>>input;
        a[i]=input;
    }
    
    
    
    for(int i=0;i<na;i++)
    {
        d[i]=1;
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j] && d[i] < d[j]+1)
                d[i]=d[j]+1;
        }
    }
    
    int max= d[0];
    for(int i=0;i<na;i++)
    {
        if(d[i]>max)
            max=d[i];
    }
    cout<<max<<endl;

}


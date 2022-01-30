#include <iostream>

using namespace std;
int d[12];
int main()
{
    d[0]=1;
    d[1]=1;
    d[2]=2;
    
    int n;
    cin>>n;
    while(n--)
    {
        int input;
        cin>>input;
        for(int i=3;i<=input;i++)
        {
            d[i]=d[i-3]+d[i-2]+d[i-1];

        }
        cout<<d[input]<<"\n";
    }

    return 0;
}
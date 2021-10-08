

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
   
    int n;
    cin>>n;
    
    long long d[91];
    d[1] = 1;
    d[2]=1;

    // 0으로 끝나면 앞에 0 또는 1 가능
    // 1로 끝나면 앞에 0 만 가능  01 세트로 생각
    for(int i=3;i<=n;i++)
    {
        d[i]=d[i-2] + d[i-1];
    }
    
    cout<<d[n]<<endl;
}

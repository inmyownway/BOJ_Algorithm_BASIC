//
#include <iostream>

using namespace std;
int D[1001];
int main()
{
    int n;
    cin >> n;
    D[0] = 1;
    D[1] = 1;
    D[2] = 2;

    for (int i = 3; i <= n; i++)
    {
        D[i] = D[i - 1] + D[i - 2];
        D[i] %= 10007;
    }
    cout << D[n] << endl;


}

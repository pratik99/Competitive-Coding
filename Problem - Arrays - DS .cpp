#include <iostream>

using namespace std;

int main()
{
    long long A[100000];
    long long N = 10000;
    cin >> N;
    for(int i = 0; i < N; i++ )
    {
        cin >> A[i];
    }
    for(int i = N-1; i>=0; i--)
    {
        cout << A[i];
        cout << " ";
    }
}
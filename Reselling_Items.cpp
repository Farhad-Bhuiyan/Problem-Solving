#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A.begin(), A.end(), greater<int>());
        long long profit = 0;
        for (int i = 0; i < min(K, N); i++)
        {
            if (A[i] > 5)
            {
                profit += (A[i] - 5);
            }
        }
        for (int i = K; i < N; i++)
        {
            if (A[i] > 10)
            {
                profit += (A[i] - 10);
            }
        }
        cout << profit << endl;
    }
    return 0;
}
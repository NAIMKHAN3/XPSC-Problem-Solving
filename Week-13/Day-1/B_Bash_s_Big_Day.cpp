#include <bits/stdc++.h>
using namespace std;

vector<long long> getPrimes(long long a)
{

    vector<bool> isPrime(a + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (long i = 2; i * i <= a; i++)
    {
        if (!isPrime[i])
        {
            continue;
        }
        for (long j = 2 * i; j <= a; j += i)
        {
            isPrime[j] = 0;
        }
    }

    vector<long long> v;
    for (long i = 2; i <= a; i++)
    {
        if (isPrime[i])
        {
            v.push_back(i);
        }
    }
    return v;
}

int main()
{

    const long N = 1e5 + 2;
    vector<long> v(N, 0);
    long n;
    cin >> n;

    vector<long long> primeList = getPrimes(N + 1);

    while (n--)
    {
        long a;
        cin >> a;

        for (int i = 0; i < primeList.size(); i++)
        {
            if (a < i)
            {
                break;
            }
            long cur = primeList[i];
            if (a % cur != 0)
            {
                continue;
            }
            v[cur]++;
            while (a % cur == 0)
            {
                a /= cur;
            }
        }
    }

    long ans = 1;
    for (long i = 2; i < N; i++)
    {
        ans = (ans > v[i]) ? ans : v[i];
    }
    cout << ans << endl;

    return 0;
}
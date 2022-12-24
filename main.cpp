
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define mod 1000000007
#define rep(i, a, b) for (int i = a; i < b; i++)
// GCD
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
// Global Element
int temp, b[200001], c[200001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int, int>> id;
        for (int i = 0; i < 2 * n; i++)
        {
            id.push_back({s[i], i});
        }
        vector<int> aid;
        sort(id.begin(), id.end());
        string a = "";
        string b = "";
        for (int i = 0; i < 2 * n; i++)
        {
            if (i < n)
            {
                a += id[i].first;
                aid.push_back(id[i].second);
            }
            else
                b += id[i].first;
        }
        if (a == b)
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(aid.begin(), aid.end());
            for (auto x : aid)
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define ll long long
#define mod 1000000007
#define rep(i, a, b) for (int i = a; i < b; i++)
// GCD
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
// Global Element
int temp, b[200001], c[200001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<pair<int, int>> id;
        for (int i = 0; i < 2 * n; i++)
        {
            id.push_back({s[i], i});
        }
        vector<int> aid;
        sort(id.begin(), id.end());
        string a = "";
        string b = "";
        for (int i = 0; i < 2 * n; i++)
        {
            if (i < n)
            {
                a += id[i].first;
                aid.push_back(id[i].second);
            }
            else
                b += id[i].first;
        }
        if (a == b)
        {
            cout << -1 << "\n";
        }
        else
        {
            sort(aid.begin(), aid.end());
            for (auto x : aid)
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}
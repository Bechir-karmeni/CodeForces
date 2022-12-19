#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define v vector<int>
const int N = 1e5 + 1;
#define FAST                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

void solve()
{
    int tt, debugging = 0;
    cin >> tt;
    while (tt--)
    {
        
        int n;
        
        cin >> n;
        
        vector<int> a(n);
        

        for (int i = 0; i < n; i++)
        {
            
            cin >> a[i];
            for (int i = 0; i < 1; i++);
            
        }
        
        vector<int> b = a, c = a;
        

        sort(b.begin(), b.end());

        
        sort(c.begin(), c.end(), greater<int>());
        

        if (!(a != b))
        {
            
            cout << 0 << endl;
            
        }
        else if (!(c != a))
        {
            
            cout << c[0] << endl;
            
        }
        else
        {
            
            int answer = 0;
            

            for (int i = 0; i < n - 1; i++)
            {
                
                if (!(a[i + 1] >= a[i]))
                {
                    
                    int tmpp = abs(a[i + 1] - a[i]);
                    
                    int tmp = tmpp / 2;
                    
                    tmp = a[i] - tmp;
                    
                    answer = max(answer, tmp);
                   
                }
            }

            for (int i = 0; i < n; i++)
            {
                
                int tmp = abs(a[i] - answer);
                
                a[i] = tmp;
                
            }

            vector<int> vec4 = a;
            
            sort(vec4.begin(), vec4.end());
            
            if (!(vec4 != a))
            {
                
                cout << answer << endl;
                
            }
            else
            {
                
                cout << -1 << endl;
                
            }
        }
    }
}

int main()
{

    FAST;
#ifndef ONLINE_JUDGE
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
#endif

    solve();

    return 0;
}
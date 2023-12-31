#include <bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> a)
{
    stack<int> st;
    int n = a.size(), ans = 0, i = 0;
    while (i < n)
    {
        while (!st.empty() && a[st.top()] > a[i])
        {
            int h = a[st.top()];
            st.pop();
            if (st.empty())
            {
                ans = max(ans, h * i);
            }
            else
            {
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int32_t main()
{
    vector<int> a = {2, 1, 5, 6, 2, 3};
    cout << get_max_area(a) << endl;
    return 0;
}
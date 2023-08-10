#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> pqmax;
priority_queue<int, vector<int>, greater<int>> pqmin;

void insert(int x)
{
    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }
        if (x < pqmax.top())
            pqmax.push(x);
        else
            pqmin.push(x);
    }
    else
    {
        // There will be two cases now
        // Case 1 : pqmax.size() > pqmin.size()
        // Case 2 : pqmin.size() > pqmax.size()
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top( ))
                pqmin.push(x);
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else
        {
            if (x <= pqmin.top())
                pqmax.push(x);
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double median()
{
    if (pqmax.size() == pqmin.size())
        return ((pqmax.top() + pqmin.top()) / 2.0);
    else if (pqmax.size() > pqmin.size())
        return pqmax.top();
    else
        return pqmin.top();
}

int main()
{
    insert(10);
    cout << median() << "\n";
    insert(15);
    cout << median() << "\n";
    insert(21);
    cout << median() << "\n";
    insert(30);
    cout << median() << "\n";
    insert(18);
    cout << median() << "\n";
    insert(19);
    cout << median() << "\n";
}
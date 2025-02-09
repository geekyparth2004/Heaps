#include<iostream>
#include<queue>
using namespace std; 
int ropes(vector<int> &v)
{
    int minCost = 0; 

    priority_queue<int, vector<int> , greater<int> > pq; 

    int n = v.size(); 

    for(int i = 0 ; i < v.size() ;i++)
    {
        pq.push(v[i]);
    }

    while(pq.size()>1)
    {
        int lo;
        int hi; 

        lo = pq.top();
        pq.pop(); 
        hi = pq.top(); 
        pq.pop(); 

        int val = lo + hi;

        minCost += val;

        pq.push(val);
    }

    return minCost;
}
int main()
{
    vector<int> v; 
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);
    v.push_back(8);

   cout<<ropes(v);
}
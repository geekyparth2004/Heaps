#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
int main()
{
    int arr[] = {3,4,2,6,5,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int> , greater<int> > pq;
    int k = 3;

    vector<int> ans; 

    for(int i = 0; i < n ; i++)
    {
        pq.push(arr[i]); 
        if(pq.size()>=k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }

    while(pq.size()>0)
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    // for(auto i : ans)
    // {
    //     cout<<i; 
    // }

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i];
    }
}
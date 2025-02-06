#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    priority_queue<int> pq; // by default max heap 

    int arr[] = {2,1,4,5,61,9,0,-2,8,9}; 
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    for(int i = 0 ; i < n ; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }

    cout<<pq.top();
}
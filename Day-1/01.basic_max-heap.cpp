#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    priority_queue<int> pq; // by default max heap 

    pq.push(2);
    pq.push(20);
    pq.push(12);
    pq.push(22);
    pq.push(24);

    cout<<pq.top();
    pq.pop(); // 24 removed
    cout<<pq.top();
}
#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
int main()
{
    priority_queue<int , vector<int> , greater<int> > pq; // min heap 

    pq.push(2);
    pq.push(20);
    pq.push(12);
    pq.push(22);
    pq.push(24);

    cout<<pq.top();
    pq.pop(); // 2 removed
    cout<<pq.top();
}
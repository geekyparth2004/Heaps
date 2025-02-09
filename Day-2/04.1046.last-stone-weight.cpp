/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> pq; 

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

            int val = abs(lo-hi); 

            pq.push(val);

        }

        return pq.top();
    }
};
// @lc code=end


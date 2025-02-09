/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> pq;

        for(int i = 0 ; i < arr.size(); i++) 
        {
            int distance = abs(x-arr[i]); 
            pair<int,int> p = {distance,arr[i]}; 
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }

        vector<int> ans;

            while(pq.size()>0){
            ans.push_back(pq.top().second); 
            pq.pop();

            }
        
        sort(ans.begin(),ans.end());
        return ans;

    }
};
// @lc code=end


//Editorial: https://leetcode.com/problems/jump-game-iii/
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        q.push(start);
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            if(arr[curr]==0)
                return true;
            if(arr[curr]<0)
                continue;
            if(arr[curr]+curr<arr.size())
                q.push(arr[curr]+curr);
            if(curr-arr[curr]>=0)
                q.push(abs(curr-arr[curr]));
            arr[curr]=-arr[curr];
        }
        return false;
    }
};

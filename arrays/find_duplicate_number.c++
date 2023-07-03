class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>1){
                ans= it.first;
            }
        }
        return ans;
    }
};
//another approach
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Find the intersection point of the two runners.
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};

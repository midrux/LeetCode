class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        
        vector<pair<int,int> > nums;
        for(int i = 0; i<numbers.size(); i++) 
            nums.push_back(make_pair(numbers[i],i+1));
        
        sort(nums.begin(), nums.end());    
        int i=0,j=nums.size()-1;
        while(i<j){
            int r = nums[i].first + nums[j].first;
            if(r == target) break;
            else if(r > target) --j;
            else if(r < target) ++i;
        }
        vector<int> ret;
        ret.push_back(min(nums[i].second, nums[j].second));
        ret.push_back(max(nums[i].second, nums[j].second));
        return ret;
    }
};
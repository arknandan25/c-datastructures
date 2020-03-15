class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
         a.push_back(0);
        a.push_back(0);
        int comp;
        //use complement approach in this question complement= target-number
       
        std::vector<int>::iterator k;
        for(int j=0;j<nums.size();++j){
            comp = target - nums[j];
            k = std::find(nums.begin(), nums.end(), comp);
            if( k != nums.end() && (k-nums.begin())!=j){
                a[0]=(j);
                a[1]=(k-nums.begin());
                return a;
            }else{
                continue;
            }
          
        }
        return a;
    }
};
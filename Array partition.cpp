class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        int sum=0;
        for(i;i<nums.size()-1;i+=2){
            int s=min(nums[i],nums[j]);
            sum+=s;
            j+=2;
        }
        return sum;
    }
};

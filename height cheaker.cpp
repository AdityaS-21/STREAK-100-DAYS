class Solution {
public:
    vector<int> sorting(vector<int> nums){
        sort(nums.begin(),nums.end());
        return nums;
    }
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int>a;
        a=sorting(heights);
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=a[i]){
                count++;
            }
        }
        return count;
    }
};

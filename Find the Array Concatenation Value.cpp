class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        string s;
        int i=0;
        long long sum=0;
        int j=nums.size()-1;
        while(i<=j){
            if(i==j){
                s=to_string(nums[i++]);
                long long a=stoul(s);
                sum+=a;
            }
            else{
                s=to_string(nums[i++]) + to_string(nums[j--]);
                long long a=stoul(s);
                sum+=a;
            }
            
        }
        
        return sum;
        
    }
};

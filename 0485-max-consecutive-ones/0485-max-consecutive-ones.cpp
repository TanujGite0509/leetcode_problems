class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;   //count in 1 go i.e. individual consectutive 1s
        int maxi=0;  //maximum count
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                if( cnt > maxi){
                    maxi++;
                }
            }
            else{
                cnt=0;   //reset at 0.
            }
        }
        return maxi;
        
    }
};
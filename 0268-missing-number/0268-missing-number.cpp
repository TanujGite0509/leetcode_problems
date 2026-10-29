class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;  // all n terms
        int xor2=0; //nums elements
        for(int j=0;j<=nums.size();j++){
            xor1= xor1^j;
        }
        for(int i=0;i<nums.size();i++){
            xor2= xor2^nums[i];
        }
        return xor1^xor2; 
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int count=0 ,add=0;
        for(int i=0; i<=n-2; i++){
            if(nums[i]>=nums[i+1]){
                add=nums[i]-nums[i+1]+1;
                count+=add;
                 nums[i+1]+=add;
}
            
            
}
        return count;
        
    }
};
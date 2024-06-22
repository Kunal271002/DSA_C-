class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int index = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == target){
                index = i;
                break;
            }
            if(nums[i] > target){
                index = i;
                break;
            }
            if(nums[n-1]<target){
                index = n;
                break;
            }   
        }
    return index;
    }
};

//Only Function;
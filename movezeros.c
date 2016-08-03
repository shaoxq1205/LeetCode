class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int temp[size];
        int result[size];
        int counter=0;
        int zeros = 0;
        for (int i=0;i<size;i++){
        if (nums[i]==0)
        {
            zeros++;
        }
        else
        {
            temp[counter]=nums;
            counter++;
        }
        }
        for (int j=0;j<size;j++){
            result
        }
    }
};

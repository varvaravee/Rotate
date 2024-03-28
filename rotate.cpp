class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if ( k < length) {

            //reverse entire array 
            reverse(nums.begin(), nums.end());

            //reverse first k elements
            reverse(nums.begin(), nums.begin()+k);

            //reverse rest of elements after k
            reverse(nums.begin()+k, nums.end());

        }
    }
};

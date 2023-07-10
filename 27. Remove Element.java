class Solution {
    public int removeElement(int[] nums, int k) {
        int i,c = 0,p = 0;
        for(i = 0;i < nums.length;i++)
        {
            if(nums[i] != k)
            {
                p = nums[c];
                nums[c++] = nums[i];
                nums[i] = p;
            }    
        }
        return c;
    }
}
        

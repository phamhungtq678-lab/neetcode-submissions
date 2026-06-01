class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int min_pos=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[min_pos]) min_pos=j;
            }
            swap(nums[i],nums[min_pos]);
        }
        vector<vector<int>> result;


        for(int i=0;i<n;i++){
        //xu ly 2 case goc
        if(nums[i]>0) break;
        if(i>0 && nums[i]==nums[i-1]) continue;

        int left=i+1;
        int right=n-1;

        while(left<right){
            int sum= nums[i]+nums[left]+nums[right];
           if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                // 1. Dịch chuyển qua phần tử tiếp theo
                left++;
                right--;
                
                // 2. Nếu phần tử mới trùng với phần tử vừa ghi nhận, tiếp tục nhảy cóc qua
                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            }

            if(sum<0) left++;
            if(sum>0) right--;
        }
     }
     return result;

        
    }
};

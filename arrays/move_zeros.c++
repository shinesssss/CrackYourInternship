  void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int k=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }else if(nums[i]==0){
                c++;
            }
        }
        while(c--){
            nums[k]=0;
            k++;
        }
    }

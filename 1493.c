int longestSubarray(int* nums, int numsSize) {
    int left = 0,right = 0, rem = 0,length = 0,maxlength = 0,count = 0;
    for(right = 0;right < numsSize;right++){
        length++;
        if(nums[right]==0){
            count++;
            if(count==1){
                rem = right;
            }
        }
        if(count==2){
            count--;
            left = rem;
            rem = right;
            length = right-left;
        }
        if(maxlength<=length){
            maxlength = length;
        }
    }
    return --maxlength;
}

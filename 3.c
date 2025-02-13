int lengthOfLongestSubstring(char* s) {
    int left = 0,right = 0,maxlength = 0,length = 0;
    int arr[128];
    for(right = 0;s[right];right++){
        arr[s[right]]++;
        length++;
        while(arr[s[right]]>1){
            arr[s[left]]--;
            left++;
            length--;
        }
        if(maxlength<=length){
            maxlength = length;
        } 
    }
    return maxlength;    
}

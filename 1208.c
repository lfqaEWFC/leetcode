int equalSubstring(char* s, char* t, int maxCost) {
    int left = 0,right = 0,length = strlen(s),size = 0,maxsize = 0;
    int str[length];
    for(int i=0;i<length;i++){
        if((s[i]-t[i])>0){
            str[i] = s[i]-t[i];
        }
        else{
            str[i] =-(s[i]-t[i]);
        }
    }
    int sum = 0;
    while(right<length){
        
        if(sum<=maxCost){
            sum+=str[right];
            right++; 
        }
        else{
            sum-=str[left];
            left++;
        }
        if(sum<=maxCost)
            size = right-left;
        if(maxsize<=size){
            maxsize = size;
        }
        
    }
    return maxsize;
}

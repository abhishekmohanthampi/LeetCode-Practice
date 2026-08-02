#define MAXLENGTH 100000
int lengthOfLongestSubstring(char* s) {
   
    int max_length=0;
    int left=0;
    int right=0;
    int hash[128]={0};

    while(s[right]!='\0'){
        if(hash[s[right]]==0){
            hash[s[right]]=1;
            
            int current_length=right-left+1;
            if(max_length<current_length){max_length=current_length;}
            right++;
        }
        else{
            hash[s[left]]=0;
            left++;

        }

    }
    return max_length;
}


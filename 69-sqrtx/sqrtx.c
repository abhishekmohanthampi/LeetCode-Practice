int mySqrt(int x) {
    if(x<2){
        return x;
    }

    long low=1,mid=1;
    long high=x/2;
    int ans=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(mid*mid<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
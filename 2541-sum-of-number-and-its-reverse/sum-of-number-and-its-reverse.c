int reversing(int num);

bool sumOfNumberAndReverse(int num) {
      
        for(int i=0;i<=100000;i++){
            int rev=reversing(i);
            if((rev+i)==num){
                return true;
            }
        }
        return false;

}

int reversing(int num){
    int rev=0;
        int n=num;
        int d;
        while(n>0){
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        return rev;
}

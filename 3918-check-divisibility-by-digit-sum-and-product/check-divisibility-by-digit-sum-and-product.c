int digsumf(int n);
int digprodf(int n);

bool checkDivisibility(int n) {
    int digsum=0;
    int digprod=0;
    int sum;
    digsum=digsumf(n);
    digprod=digprodf(n);
    if(n%(digsum+digprod)==0){
        return true;
    }
    else{
        return false;
    }
}

int digsumf(int n){
    int s=0;
    while(n>0){
        int d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}

int digprodf(int n){
      int p=1;
    while(n>0){
        int d=n%10;
        p=p*d;
        n=n/10;
    }
    return p;
}

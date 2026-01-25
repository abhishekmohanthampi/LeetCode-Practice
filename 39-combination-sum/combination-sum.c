/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void bt(int* a,int n,int t,int s,int* tmp,int ts,int*** r,int* rs,int** cs);
int** combinationSum(int* a,int n,int t,int* rs,int** cs){
    int** r=NULL;
    *rs=0;
    *cs=NULL;
    int tmp[1000];
    bt(a,n,t,0,tmp,0,&r,rs,cs);



    return r;
}


void bt(int* a,int n,int t,int s,int* tmp,int ts,int*** r,int* rs,int** cs){
    if(t==0){
        *r=realloc(*r,(*rs+1)*sizeof(int*));
        (*r)[*rs]=malloc(ts*sizeof(int));
        for(int i=0;i<ts;i++) (*r)[*rs][i]=tmp[i];
        *cs=realloc(*cs,(*rs+1)*sizeof(int));
        (*cs)[*rs]=ts;
        (*rs)++;
        return;
    }
    for(int i=s;i<n;i++){
        if(a[i]>t) continue;
        tmp[ts]=a[i];
        bt(a,n,t-a[i],i,tmp,ts+1,r,rs,cs);
    }
}

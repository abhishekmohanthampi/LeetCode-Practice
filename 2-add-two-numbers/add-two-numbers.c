

struct ListNode* addTwoNumbers(struct ListNode* l1,struct ListNode* l2){
    int rem=0;
    struct ListNode* dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=NULL;
    struct ListNode* tail=dummy;
    while(l1!=NULL||l2!=NULL||rem!=0){
    int val1=0,val2=0;
    if(l1!=NULL){
    val1=l1->val;
    l1=l1->next;
    }
    if(l2!=NULL){
    val2=l2->val;
    l2=l2->next;
    }
    int total=val1+val2+rem;
    rem=total/10;
    struct ListNode* l3=(struct ListNode*)malloc(sizeof(struct ListNode));
    l3->val=total%10;
    l3->next=NULL;
    tail->next=l3;
    tail=l3;
    }
    struct ListNode* ans=dummy->next;
    free(dummy);
    return ans;
}
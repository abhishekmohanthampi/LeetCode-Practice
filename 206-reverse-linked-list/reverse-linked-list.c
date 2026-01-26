
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode*c=head;
    struct ListNode*p=NULL;
    struct ListNode*n=NULL;

    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }

    return p;
}
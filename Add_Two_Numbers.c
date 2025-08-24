/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummyhead= createNode(0);
    struct ListNode* current=dummyhead;
    int carry=0;
    while(l1||l2||carry){
        int val1=l1?l1->val:0;
        int val2=l2?l2->val:0;
        int total=val1+val2+carry;
        carry=total/10;
        current->next=createNode(total%10);
        current=current->next;
        if(l1){
            l1=l1->next;
        }
        if(l2){
            l2=l2->next;
        }
    }
    return dummyhead->next;
}
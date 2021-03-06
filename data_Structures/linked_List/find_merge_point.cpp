/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB) {
    Node *currentA = headA;
    Node *currentB = headB;

    //Do till the two nodes are the same
    while(currentA != currentB){
        
        if(currentA->next == NULL){
            currentA = headB;
        }else{
            currentA = currentA->next;
        }
      
        if(currentB->next == NULL){
            currentB = headA;
        }else{
            currentB = currentB->next;
        }
    }
    return currentB->data;
}
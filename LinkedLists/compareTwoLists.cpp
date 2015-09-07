/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    int k;
    if((headA==NULL)&&(headB==NULL))
        return 1;
    if(((headA==NULL)&&(headB!=NULL))||((headA!=NULL)&&(headB==NULL)))
        return 0;
    if(headA->data==headB->data){
        headA=headA->next;
        headB=headB->next;
        return CompareLists(headA,headB);
    }else{
        return 0;
    }

}

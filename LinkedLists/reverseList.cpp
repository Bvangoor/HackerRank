/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head==NULL)
        return NULL;
    Node *current,*temp,*next;
    current=head;
    next=head->next;
    current->next=NULL;
    while(next!=NULL){
        temp=next->next;
        next->next=current;
        current=next;
        next=temp;
    }
    return current;
}

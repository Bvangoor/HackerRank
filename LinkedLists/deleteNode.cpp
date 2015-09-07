/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position==0){
        head=head->next;
        return head;
    }
    int count=0;
    Node *temp,*prev;
    prev=head;
    temp=head->next;
    count++;
    while((count<position)&&(temp!=NULL)){
        temp=temp->next;
        prev=prev->next;
        count++;
    }
    prev->next=temp->next;
    return head;
}

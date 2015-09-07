/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp,*new_node,*prev;
    new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL)
        return new_node;
    temp=head->next;
    prev=head;
    while(temp!=NULL){
        temp=temp->next;
        prev=prev->next;
    }
    prev->next=new_node;
    return head;
}

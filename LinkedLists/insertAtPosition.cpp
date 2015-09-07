/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    int counter=0;
    Node *temp,*prev,*new_node;
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=NULL;
    if(head==NULL)
        return new_node;
    if(position==0){
        new_node->next=head;
        return new_node;
    }        
    prev=head;
    temp=head->next;
    counter++;
    while((counter<position) && (temp!=NULL)){
        temp=temp->next;
        prev=prev->next;
        counter++;
    }
    prev->next=new_node;
    new_node->next=temp;
    return head;
}

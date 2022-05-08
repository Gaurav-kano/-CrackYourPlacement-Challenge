
#include "bits/stdc++.h"
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

void push (Node** new_head, int new_data)
{
  Node* new_node = new Node();
  new_node-> data = new_data;
  new_node-> next = (*new_head);
  (*new_head) = new_node;
}

void printlist(Node *node)
{
    while(node!=NULL)
    {
      cout<<" "<<node->data;
      node = node->next;
    }
}


int main() {

  Node* head=NULL;
  push(&head,6);
  push(&head,5);
  push(&head,7);
  push(&head,1);
  push(&head,6);

  printlist(head);

  return 0;
}

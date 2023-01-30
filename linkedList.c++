#include <iostream> 
using namespace std; 
class node 
{ 
public: 
int data; 
node *next; 
node(int val) 
{ 
data = val; 
next = NULL; 
} 
}; 
//insert at head 
void insertATHead(node *&head, int val) { 
node *n = new node(val); 
n->next = head; 
head = n; 
} 
//insert at tail 
void insertAtTail(node *&head, int val) { 
node *n = new node(val); 
if (head == NULL) 
{ 
head = n;
return; 
} 
node *temp = head; 
while (temp->next != NULL) 
{ 
temp = temp->next; 
} 
temp->next = n; 
} 
//display element 
void disaplay(node *head) 
{ 
node *temp = head; 
while (temp != NULL) 
{ 
cout << temp->data << " ->"; temp = temp->next; 
} 
cout << "NULL" << endl; 
} 
//searching element 
bool search(node *head, int key) { 
node *temp = head; 
while (temp != NULL) 
{ 
if (temp->data == key) 
{ 
return true; 
} 
temp = temp->next; 
} 
return false; 
} 
int main() 
{
node *head = NULL; 
insertAtTail(head, 1); 
insertAtTail(head, 2); 
insertAtTail(head, 3); 
disaplay(head); 
insertATHead(head, 4); 
disaplay(head); 
cout << search(head, 2) << endl; 
return 0; 
} 
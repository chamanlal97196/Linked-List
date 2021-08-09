#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next = NULL;
	}
};
Node *insertAtBeginning(Node *head, int x){
	Node *temp=new Node(x);
	temp->next = head;
	return temp;
}
void printList(Node *head){
	Node *curr=head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}

int main()
{
	Node *head= new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head=insertAtBeginning(head,36);
	head=insertAtBeginning(head,35);
	printList(head);
	return 0;
}

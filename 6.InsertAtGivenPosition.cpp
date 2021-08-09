#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data =x;
		next =NULL;
	}
};
Node *insertAtGivenPosition(Node *head, int position, int x){
	Node *temp=new Node(x);
	if(position==1){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	for(int i=1; i<=position-2 && curr->next!=NULL; i++){
		curr=curr->next;
	}
	if(curr->next==NULL) return head;
	temp->next=curr->next;
	curr->next=temp;
	return head;
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
	// std::cout << "Hello, World" << std::endl;
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head=insertAtGivenPosition(head, 3, 25);
	printList(head);
	return 0;
}

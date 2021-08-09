#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *reverse(Node *head){
	Node *curr=head;
	Node *pre=NULL;
	while(curr!=NULL){
		Node *next=curr->next;
		curr->next =pre;
		pre=curr;
		curr=next;
	}
	return pre;
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
	head=reverse(head);
	printList(head);
	return 0;
}

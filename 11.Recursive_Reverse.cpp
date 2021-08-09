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

Node *recReverse(Node *head){
	if(head==NULL || head->next ==NULL) return head;
	Node *rest_head=recReverse(head->next);
	Node *rest_tail=head->next;
	rest_tail->next=head;
	head->next=NULL;
	return rest_head;
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
	head=recReverse(head);
	printList(head);
	return 0;
}

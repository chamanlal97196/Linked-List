#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next= NULL;
	}
};

Node *insertInSortedList(Node *head, int x){
	Node *temp=new Node(x);
	if(head==NULL) return temp;
	if(x < head->data){
		temp->next=head;
		return temp;
	}
	Node *curr=head;
	while(curr->next!=NULL && curr->next->data < x){
		curr=curr->next;
	}
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
	head=insertInSortedList(head, 35);
	printList(head);
	return 0;
}

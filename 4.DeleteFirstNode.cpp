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

Node *deleteFirstNode(Node *head){
	Node *curr=head;
	if(curr==NULL) return NULL;
	else{
		Node *temp = head->next;
		delete head;
		return temp;
	}
	
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
	head->next=new Node (20);
	head->next->next=new Node(30);
	head=deleteFirstNode(head);
	head=deleteFirstNode(head);
	printList(head);
	return 0;
}

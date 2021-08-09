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

void printNthFromEnd(Node *head, int n){
	if(head==NULL) return;
	int len=0;
	for(Node *curr=head; curr!=NULL; curr=curr->next){
		len++;
	}
	Node *curr=head;
	if(n>len) return;
	for(int i=1; i<len-n+1; i++){
		curr=curr->next;
	}
	cout<<curr->data<<" ";
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
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printList(head);
	cout<<endl;
	printNthFromEnd(head, 2);
	return 0;
}

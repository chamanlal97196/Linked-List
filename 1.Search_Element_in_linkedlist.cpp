#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	Node(int x){
		data = x;
		next=NULL;
	}
};
int rsearch(Node *head, int x){
	if(head == NULL) return -1;
	if(head->data == x) return 1;
	else{
		int res=rsearch(head->next, x);
		if(res==-1) return -1;
		else{
			return res+1;
		}
	}
}

int search(Node *head, int x){
	Node *curr =head;
	int pos=1;
	while(curr!=NULL){
		if(curr->data==x) return pos;
		else{
			pos++;
		    curr=curr->next;
		}
	}
	return -1;
}
void printList(Node *head){
	Node *curr = head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}
int main()
{
	// std::cout << "Hello, World" << std::endl;
	Node *head = new Node(10);
	head->next = new Node(20);
	head->next->next=new Node(30);
    cout<<search(head, 30)<<endl;
    cout<<rsearch(head, 30)<<endl;
    
	printList(head);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
struct Node{
	int value;
	struct Node *pleft, *pright;
};
Node* newNode(int value){
	Node* node=new Node;
	node->value=value;
	node->pleft=NULL;
	node->pright=NULL;
	return node;
}
Node* insertNode(Node* node,int value){
	if(node==NULL) return newNode(value);
	if(value>node->value) node->pright=insertNode(node->pright,value);
	if(value<node->value) node->pleft=insertNode(node->pleft,value);
	return node;
}
Node* minValueNode(Node *node){
	Node *current=node;
	while(current->pleft!=NULL){
		current=current->pleft;
	}
	return current;
}
Node* fine_and_delete(Node* node, int value){
	if(node==NULL) return node;
	if(value<node->value) node->pleft = fine_and_delete(node->pleft,value);
	else if(value>node->value) node->pright=fine_and_delete(node->pright,value);
	else{
		if(node->pleft==NULL){
			Node *temp=node->pright;
			delete[] node;
			return temp;
		}
		if(node->pright==NULL){
			Node* temp=node->pleft;
			delete[] node;
			return temp;
		}
		Node* temp=minValueNode(node->pright);
		node->value=temp->value;
		node->pright=fine_and_delete(node->pright,temp->value);
	}
	return node;
}
void printStartToEnd(Node *node){
	if(node==NULL) return;
	cout<<node->value<<" ";
	printStartToEnd(node->pleft);
	printStartToEnd(node->pright);
}
void printEndToStart(Node* node){
	if(node==NULL) return;
	printEndToStart(node->pleft);
	printEndToStart(node->pright);
	cout<<node->value<<" ";
}
void preoder(Node* node){
	if(node==NULL) return;
	preoder(node->pleft);
	cout<<node->value<<" ";
	preoder(node->pright);
}
int main(){
	Node* node=NULL;
	int n,k;
	while(cin>>n){
		switch(n){
			case 1:{
				cin>>k;
				node=insertNode(node,k);
				break;
			}
			case 2:{
				cin>>k;
				node=fine_and_delete(node,k);
				break;
			}
			case 3:{
				printStartToEnd(node);
				cout<<endl;
				break;
			}
			case 4:{
				preoder(node);
				cout<<endl;
				break;
			}
			case 5:{
				printEndToStart(node);
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}

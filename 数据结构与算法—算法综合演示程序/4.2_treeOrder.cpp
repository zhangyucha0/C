#include <stdio.h>
#include <stdlib.h>
typedef struct TNode{
	struct TNode *LChild;
	int data;
	struct TNode *RChild;
}TNode,*BTree;

void createBTree(BTree &T){
	int x;
	scanf("%d",&x);
	if(x!=-1){
		T=(TNode *)malloc(sizeof(TNode));
		T->data = x;
		createBTree(T->LChild);
		createBTree(T->RChild);
	}else{
		T=NULL;
	}	
}

void preOrderTraverse(BTree T){
	if(T==NULL)
		return;
	else{
		printf("%d ",T->data);
		preOrderTraverse(T->LChild);
		preOrderTraverse(T->RChild);
	}
}

void inOrderTraverse(BTree T){
	if(T==NULL)
		return;
	else{
		inOrderTraverse(T->LChild);
		printf("%d ",T->data);
		inOrderTraverse(T->RChild);
	}	
}

void afterOrderTraverse(BTree T){
	if(T==NULL)
		return;
	else{
		afterOrderTraverse(T->LChild);
		afterOrderTraverse(T->RChild);
		printf("%d ",T->data);
	}	
}

void treeOrder(){
	BTree T;
	printf("(����1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1)"); 
	printf("\n\n����������"); 
	createBTree(T);
	printf("\n������������");
	preOrderTraverse(T);
	printf("\n������������");
	inOrderTraverse(T);
	printf("\n������������");
	afterOrderTraverse(T);	
}

//int main(void){
//	treeOrder();
//}

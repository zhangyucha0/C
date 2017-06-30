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
	printf("(例：1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1)"); 
	printf("\n\n请输入树："); 
	createBTree(T);
	printf("\n先序遍历结果：");
	preOrderTraverse(T);
	printf("\n中序遍历结果：");
	inOrderTraverse(T);
	printf("\n后序遍历结果：");
	afterOrderTraverse(T);	
}

//int main(void){
//	treeOrder();
//}

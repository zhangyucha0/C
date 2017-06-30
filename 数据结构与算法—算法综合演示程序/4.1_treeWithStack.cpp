#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef struct TNode1{
	struct TNode1 *lchild;
	int data;
	struct TNode1 *rchild;	
}TNode1,*BiTree1;

typedef BiTree1 SElemType1;

typedef struct{
	SElemType1 *base;
	SElemType1 *top;
}SqStack1;

void init1(SqStack1 &s){
	s.base = (SElemType1 *)malloc(MAXSIZE*sizeof(SElemType1));
	s.top = s.base;
}

int Empty1(SqStack1 s){
	if(s.base==s.top)
		return 1;
	else
		return 0;
}

void push1(SqStack1 &s,SElemType1 e){ //»Î’ª
	if((s.top-s.base)!=MAXSIZE){
		*s.top=e;
		s.top++;
	}
}

void pop1(SqStack1 &s,SElemType1 &e){ //≥ˆ’ª 
	if(!Empty1(s)){
		--s.top;
 		e=*s.top;
	}
}


void creatTree1(BiTree1 &T){
	char x;  //int x
	scanf("%c",&x);  //%d
	if(x!=' '){  //!=0
		T=(TNode1 *)malloc(sizeof(TNode1));
		T->data=x;
		creatTree1(T->lchild);
		creatTree1(T->rchild);
	}else
		T=NULL;
}
void InOrder01(BiTree1 T){
	if(T==NULL)	{
		return;
	}
	else{
		InOrder01(T->lchild);
		printf("%d",T->data);
		InOrder01(T->rchild);
	}
}

void InOrder02(SqStack1 &S,BiTree1 T){
	while(!Empty1(S)||T){
		if(T){
			push1(S,T);
			T=T->lchild;
		}else{
			pop1(S,T);
			printf("%d",T->data);
			T=T->rchild;
		}
	}
}

void treeWithStack(){
	BiTree1 T;
	printf("«Î ‰»Î ˜:"); 
	creatTree1(T);
	InOrder01(T);
	SqStack1 s;
	init1(s);
	InOrder02(s,T);	
}

//int main(){
//	treeWithStack();	
//}

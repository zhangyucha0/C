#include<stdio.h>
#include<stdlib.h>
typedef int ElemType;
typedef struct SNode{
	int data;
	struct SNode *next;
}SNode,*LinkedStack;

void initLinkedStack(LinkedStack &s){
	s= NULL;
}

void push(LinkedStack &s,int e){
	LinkedStack p = (LinkedStack)malloc(sizeof(SNode));
	p->data = e;
	p->next = s;
	s = p;
}

void pop(LinkedStack &s,int &e){
	e = s->data;
	LinkedStack p = s;
	s =s->next;
	free(p);
}

void convert(LinkedStack &s,int x){
	while(x!=0){
		push(s,x%2);
		x=x/2;
	}
	while(s!=NULL){
		pop(s,x);
		printf("%d",x);
	}
}

/*void display(LinkedStack s){
	LinkedStack p = s->next;
	while(p!=NULL){
		printf("%d-->",p->data);
		p = p->next;
	}
}*/

void stack_Convert(){
	LinkedStack s;
	int x;
	printf("《十进制数to二进制转化》\n\n");
	printf("十进制数：");
	scanf("%d",&x);
	initLinkedStack(s);
	printf("二进制数："); 
	convert(s,x);
}

//int main(){
//	stack_Convert();
//	return 0;
//}

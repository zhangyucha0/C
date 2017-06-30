#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

typedef int ElemType;  //定义字符 "ElemType" == int类型； 

//定义结构体LNode
typedef struct LNode{   
	ElemType data;
	struct LNode *next;  //定义*next为LNode结构的指针(存放下个节点的地址） 
}LNode,*LinkedList;  //定义LNode为该结构体结构的函数、*LinkedList为该结构体结构的指针 

//初始化头结点 
void initLinkedList(LinkedList &L){
	L = (LNode *)malloc(sizeof(LNode));
	L->data = -1;
	L->next = NULL;
}

//判断单链表是否为空 
int isEmpty(LinkedList L){
	if(L->next==NULL)
		return 1;
	else
		return 0;
}

//向单链表中添加节点 
void insert(LinkedList &L,ElemType e){
	LinkedList p = (LNode *)malloc(sizeof(LNode));  //新分配一个节点空间并用指针P指向 
	p->data = e;  //将p所指的空间的data域赋值为e 
	p->next = L->next;  //将p所指空间的next域指向L所指空间的next域 
	L->next = p;  //将L所指空间的next域指针指向p 
}

//显示当前单链表的内容 
void display(LinkedList L){
	printf("\t\t\t ");
	LinkedList p = L->next;
	while(p!=NULL){
		printf("%d-->",p->data);
		p = p->next;
	}
	printf("\n");
}

void MergeList(LinkedList &La,LinkedList &Lb,LinkedList &Lc) {
	LinkedList pa,pb,pc;
	pa=La->next;
	pb=Lb->next;
	Lc=pc=La;
	while(pa&&pb){
		if(pa->data<=pb->data){
			pc->next=pa;
			pc=pa;
			pa=pa->next;
		}else{
			pc->next=pb;
			pc=pb;
			pb=pb->next;
		}
	}
	pc->next=pa?pa:pb;
	free(Lb);
}

void singleLinkedList(){
	LinkedList La;
	LinkedList Lb;
	LinkedList Lc;
	initLinkedList(La);
	initLinkedList(Lb);
	initLinkedList(Lc);
	int List,num;
	int judge;
	int x;
	while (1) {
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
		printf("\t\t\t┃         姓名：张禹超           ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃             单链表             ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃         1.初始化头结点         ┃\n");
    	printf("\t\t\t┃         2.判断是否为空         ┃\n");
    	printf("\t\t\t┃         3.添加新节点           ┃\n");
    	printf("\t\t\t┃         4.合并两个单链表       ┃\n");
    	printf("\t\t\t┃         5.返回主菜单           ┃\n");
    	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
    	printf("\n");
    	if(judge!=1){
    		display(La); 
			display(Lb);
    	}
		display(Lc);
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 5) //输入3跳出循环，退出程序
    		break;
        	
    	switch (x) {
        	case 1:
	         	initLinkedList(La);
				initLinkedList(Lb);
				initLinkedList(Lc);
				insert(La,5);
				insert(La,3);
				insert(La,1); 
				insert(Lb,6);
				insert(Lb,4);
				insert(Lb,2);
				system("cls"); 
           		break;
        	case 2:
        		printf("****************************\n");
        		printf("\n 请输入要判断的链表序号："); 
        		scanf("%d",&List);
        		if(List==1){
					if(isEmpty(La))
						printf(" 链表 %d 为空\n",List);
					else
						printf(" 链表 %d 不为空\n",List);
				}else if(List==2){
					if(isEmpty(La))
						printf(" 链表 %d 为空\n",List);
					else
						printf(" 链表 %d 不为空\n",List);						
				}else if(List==3){
					if(isEmpty(La))
						printf(" 链表 %d 为空\n",List);
					else
						printf(" 链表 %d 不为空\n",List);						
				}
				printf("\n");	
        		printf("****************************\n");
				system("pause");
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n");
				printf("\n 请输入链表序号和插入的内容(以空格隔开): ");
				scanf("%d %d",&List,&num);
				if(List==1)
					insert(La,num);
				else if(List==2)
					insert(Lb,num);
				else if(List==3)
					insert(Lc,num);
				printf("\n");
				printf("****************************\n");  
				system("pause"); 
        		system("cls");
            	break;
        	case 4:
        		printf("*****************************\n");
				MergeList(La,Lb,Lc);  
				judge=1;     		
        		system("cls");
            	break;					                	
        	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
        		system("cls");
            	printf("输入的数字不正确\n");
            	break;
    	}
    }
        
//	initLinkedList(L);
//	if(isEmpty(L))
//		printf("空链表\n");
//	else
//		printf("非空链表\n");
//	insert(La,5);
//	insert(La,3);
//	insert(La,1);
//	display(La);
//	printf("\n");
//	insert(Lb,6);
//	insert(Lb,4);
//	insert(Lb,2);
//	display(Lb);
//	MergeList(La,Lb,Lc);
//	printf("\n");
//	display(Lc);
//	display(L); 

}

//int main(){
//	singleLinkedList();
//}
 

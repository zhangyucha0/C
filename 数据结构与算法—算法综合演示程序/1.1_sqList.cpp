#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

typedef int ElemType;
typedef struct{
	ElemType *elem;
	int length;
	int listSize;
}SqList;

int initSqList(SqList &L){
	L.length=0;
	L.listSize=30;
	L.elem=(int *)malloc(30*sizeof(int));
}

void insert(SqList &L,int i){
	L.elem[L.length]=i;
	L.length++;
}

void listDelete(SqList &L,int i,int &t){
	t=L.elem[i-1];
	int j;
	for(j=i;j<=L.length;j++)
		L.elem[j-1]=L.elem[j];
	L.length--;
}

int findElem(SqList L,ElemType e) //判断顺序表中是否存在值为e的元素
{
	int i;
	for(i=0;i<=L.length;i++){
		if(*L.elem++ == e){  //L.elem[i]
			printf("表中存在元素 %d\n",e);
			return 1;
		}
	}
	printf("表中不存在元素 %d\n",e);
	return 0;
}

void display(SqList L){
	int i;
	if(L.length!=NULL){
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t\t┏");	
			printf("━");
			if(i==L.length)
				printf("┓\n");
		}
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t  顺序表┃");
			printf("%d ",L.elem[i-1]);
			if(i==L.length)
				printf("┃\n");
		}
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t\t┗");
			printf("━");
			if(i==L.length)
				printf("┛\n");
		}		
	}
}

int sqList(){
	int i;
	int t;
	int del;
	int f;
	SqList list1;
	initSqList(list1);
	int x;
	while (1) {
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
		printf("\t\t\t┃         姓名：张禹超           ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃             线性表             ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃           1.初始化             ┃\n");
    	printf("\t\t\t┃           2.插入               ┃\n");
    	printf("\t\t\t┃           3.删除               ┃\n");
    	printf("\t\t\t┃           4.查找               ┃\n");
    	printf("\t\t\t┃           5.返回主菜单         ┃\n");
    	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
    	printf("\n");
		display(list1);
		printf("\n");
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 5) //输入3跳出循环，退出程序
    		break;
        	
    	switch (x) {
        	case 1:
        		initSqList(list1);
				for(i=1;i<=8;i++)
					insert(list1,i); 
				system("cls"); 
           		break;
        	case 2:
        		printf("****************************\n");
        		printf(" 请输入要插入的数字：");
				scanf("%d",&i);
				insert(list1,i);
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n");
				printf("\n请输入要删除的位置: ");
				scanf("%d",&del);
				listDelete(list1,del,t);
				printf("\n");
				printf("****************************\n");  
				system("pause"); 
        		system("cls");
            	break;
        	case 4:
        		printf("*****************************\n");
				printf("\n请输入要查找的元素：");
				scanf("%d",&f);
				findElem(list1,f); 
				printf("\n");    
				printf("****************************\n");       		
        		system("pause");
        		system("cls");
            	break;					                	
        	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
        		system("cls");
            	printf("输入的数字不正确\n");
            	break;
    	}
    }
	
	//printf("━━━━━━初始化 ━━━━━━\n");
	//printf("表中数据为:\n");
	//SqList list1;
	//initSqList(list1);
	//for(i=1;i<=8;i++)
	//	insert(list1,i); 
	//display(list1);
	//printf("\n\n━━━━━━删除 ━━━━━━━\n");
	//printf("\n请输入要删除的位置: ");
	//scanf("%d",&del);
	//listDelete(list1,del,t);
	//display(list1);
	//printf("\n被删除的内容为：%d",t);
	//printf("\n\n━━━━━━插入 ━━━━━━━\n");
	//printf("请输入要插入的数字：");
	//scanf("%d",&i);
	//insert(list1,i);
	//display(list1);
	//printf("\n\n━━━━━━查找 ━━━━━━━\n");	
	//printf("请输入要查找的元素：");
	//scanf("%d",&f);
	//findElem(list1,f);
}

//int main(){
//	sqList();
//}


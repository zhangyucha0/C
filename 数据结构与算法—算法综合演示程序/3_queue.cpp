#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define QElemType int
#define MAXQSIZE 5
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

typedef struct QNode{
	QElemType data;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct{
	QElemType *base;
	int front;
	int rear;
}SqQueue;

int initQueue(SqQueue &Q){  //初始化 
	Q.base = (QElemType *)malloc(MAXQSIZE*sizeof(QElemType));
	if(!Q.base)exit(OVERFLOW);
	Q.front = Q.rear= 0;
	return OK;
}

int enQueue(SqQueue &Q,QElemType e){  //入队 
	if((Q.rear+1)%MAXQSIZE == Q.front)
		return ERROR;
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear+1)%MAXQSIZE;
	return OK;
}

int deQueue(SqQueue &Q,QElemType &e){  //出队 
	if(Q.front == Q.rear)
		return ERROR;
	e = Q.base[Q.front];
	Q.front= (Q.front+1)%MAXQSIZE;
	return OK;
}

int QueueLength(SqQueue Q){  //队列长度 
	return (Q.rear-Q.front+MAXQSIZE)%MAXQSIZE;
}

int isEmepty(SqQueue Q){  //判空 
	if(Q.front == Q.rear){
		printf("QLIST IS NULL\n");	
	}
	else{
		printf("QLIST IS NOT NULL\n");
	}
}

void queue(){
	SqQueue Q;
	QElemType e;
	initQueue(Q);
	int in;
	int x;
	while (1) {
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
		printf("\t\t\t┃         姓名：张禹超           ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃            循环队列            ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃           1.初始化             ┃\n");
    	printf("\t\t\t┃           2.入队               ┃\n");
    	printf("\t\t\t┃           3.出队               ┃\n");
    	printf("\t\t\t┃           4.判空               ┃\n");
    	printf("\t\t\t┃           5.队列长度           ┃\n");	
    	printf("\t\t\t┃           6.返回主菜单         ┃\n");
    	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
    	printf("\n");
    	printf("\t\t\t 队列长度为：%d\n",QueueLength(Q));
		printf("\n");
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 6) //输入6跳出循环，退出程序
    		break;
        	
    	switch (x) {
        	case 1:
				initQueue(Q);
				system("cls"); 
           		break;
        	case 2:
        		printf("****************************\n");
        		printf(" 请输入要入队的数字：");
				scanf("%d",&in);
				enQueue(Q,in);
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n"); 
				deQueue(Q,e);
				printf("\n 出队数据为：%d\n",e);
				printf("\n");
				printf("****************************\n");  
				system("pause"); 
        		system("cls");
            	break;
        	case 4:
        		printf("*****************************\n");
        		printf("\n");
				isEmepty(Q); 
				printf("\n");    
				printf("****************************\n");       		
        		system("pause");
        		system("cls");
            	break;
       		case 5:
        		printf("*****************************\n");
				printf("\n 队列长度为：%d\n\n",QueueLength(Q));
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
//	enQueue(Q,1);
//	enQueue(Q,2);
//	enQueue(Q,3);
//	printf("队列长度为：%d\n",QueueLength(Q));
//	deQueue(Q,e);
//	printf("出队数据为：%d\n",e);
//	printf("队列长度为：%d\n",QueueLength(Q));
//	isEmepty(Q);		
}

//int main(){
//	queue();
//}

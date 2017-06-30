#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define QElemType int
#define MAXQSIZE 5
#define OK 1
#define ERROR 0
#define OVERFLOW -1
#define GetOpNum() printf("\n �����ּ�ѡ��Ҫִ�еĲ�����");  //������� 
#define AnyKeyReturn() printf("\n\n�밴������������˵�...");

typedef struct QNode{
	QElemType data;
	struct QNode *next;
}QNode,*QueuePtr;

typedef struct{
	QElemType *base;
	int front;
	int rear;
}SqQueue;

int initQueue(SqQueue &Q){  //��ʼ�� 
	Q.base = (QElemType *)malloc(MAXQSIZE*sizeof(QElemType));
	if(!Q.base)exit(OVERFLOW);
	Q.front = Q.rear= 0;
	return OK;
}

int enQueue(SqQueue &Q,QElemType e){  //��� 
	if((Q.rear+1)%MAXQSIZE == Q.front)
		return ERROR;
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear+1)%MAXQSIZE;
	return OK;
}

int deQueue(SqQueue &Q,QElemType &e){  //���� 
	if(Q.front == Q.rear)
		return ERROR;
	e = Q.base[Q.front];
	Q.front= (Q.front+1)%MAXQSIZE;
	return OK;
}

int QueueLength(SqQueue Q){  //���г��� 
	return (Q.rear-Q.front+MAXQSIZE)%MAXQSIZE;
}

int isEmepty(SqQueue Q){  //�п� 
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
		printf("\t\t\t������������������������������������\n");
		printf("\t\t\t��   �����ݽṹ���㷨���㷨��ʾ   ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
		printf("\t\t\t��         ѧ�ţ�150809313        ��\n");
		printf("\t\t\t��         ����������           ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��            ѭ������            ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��           1.��ʼ��             ��\n");
    	printf("\t\t\t��           2.���               ��\n");
    	printf("\t\t\t��           3.����               ��\n");
    	printf("\t\t\t��           4.�п�               ��\n");
    	printf("\t\t\t��           5.���г���           ��\n");	
    	printf("\t\t\t��           6.�������˵�         ��\n");
    	printf("\t\t\t������������������������������������\n");
    	printf("\n");
    	printf("\t\t\t ���г���Ϊ��%d\n",QueueLength(Q));
		printf("\n");
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 6) //����6����ѭ�����˳�����
    		break;
        	
    	switch (x) {
        	case 1:
				initQueue(Q);
				system("cls"); 
           		break;
        	case 2:
        		printf("****************************\n");
        		printf(" ������Ҫ��ӵ����֣�");
				scanf("%d",&in);
				enQueue(Q,in);
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n"); 
				deQueue(Q,e);
				printf("\n ��������Ϊ��%d\n",e);
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
				printf("\n ���г���Ϊ��%d\n\n",QueueLength(Q));
				printf("****************************\n");       		
        		system("pause");
        		system("cls");
            	break;										                	
        	default:  //���������������siwtch��䣬������һ��ѭ��
        		system("cls");
            	printf("��������ֲ���ȷ\n");
            	break;
    	}
    }	
//	enQueue(Q,1);
//	enQueue(Q,2);
//	enQueue(Q,3);
//	printf("���г���Ϊ��%d\n",QueueLength(Q));
//	deQueue(Q,e);
//	printf("��������Ϊ��%d\n",e);
//	printf("���г���Ϊ��%d\n",QueueLength(Q));
//	isEmepty(Q);		
}

//int main(){
//	queue();
//}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n �����ּ�ѡ��Ҫִ�еĲ�����");  //������� 
#define AnyKeyReturn() printf("\n\n�밴������������˵�...");

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

int findElem(SqList L,ElemType e) //�ж�˳������Ƿ����ֵΪe��Ԫ��
{
	int i;
	for(i=0;i<=L.length;i++){
		if(*L.elem++ == e){  //L.elem[i]
			printf("���д���Ԫ�� %d\n",e);
			return 1;
		}
	}
	printf("���в�����Ԫ�� %d\n",e);
	return 0;
}

void display(SqList L){
	int i;
	if(L.length!=NULL){
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t\t��");	
			printf("��");
			if(i==L.length)
				printf("��\n");
		}
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t  ˳���");
			printf("%d ",L.elem[i-1]);
			if(i==L.length)
				printf("��\n");
		}
		for(i=1;i<=L.length;i++){
			if(i==1)
				printf("\t\t\t��");
			printf("��");
			if(i==L.length)
				printf("��\n");
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
		printf("\t\t\t������������������������������������\n");
		printf("\t\t\t��   �����ݽṹ���㷨���㷨��ʾ   ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
		printf("\t\t\t��         ѧ�ţ�150809313        ��\n");
		printf("\t\t\t��         ����������           ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��             ���Ա�             ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��           1.��ʼ��             ��\n");
    	printf("\t\t\t��           2.����               ��\n");
    	printf("\t\t\t��           3.ɾ��               ��\n");
    	printf("\t\t\t��           4.����               ��\n");
    	printf("\t\t\t��           5.�������˵�         ��\n");
    	printf("\t\t\t������������������������������������\n");
    	printf("\n");
		display(list1);
		printf("\n");
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 5) //����3����ѭ�����˳�����
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
        		printf(" ������Ҫ��������֣�");
				scanf("%d",&i);
				insert(list1,i);
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n");
				printf("\n������Ҫɾ����λ��: ");
				scanf("%d",&del);
				listDelete(list1,del,t);
				printf("\n");
				printf("****************************\n");  
				system("pause"); 
        		system("cls");
            	break;
        	case 4:
        		printf("*****************************\n");
				printf("\n������Ҫ���ҵ�Ԫ�أ�");
				scanf("%d",&f);
				findElem(list1,f); 
				printf("\n");    
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
	
	//printf("��������������ʼ�� ������������\n");
	//printf("��������Ϊ:\n");
	//SqList list1;
	//initSqList(list1);
	//for(i=1;i<=8;i++)
	//	insert(list1,i); 
	//display(list1);
	//printf("\n\n������������ɾ�� ��������������\n");
	//printf("\n������Ҫɾ����λ��: ");
	//scanf("%d",&del);
	//listDelete(list1,del,t);
	//display(list1);
	//printf("\n��ɾ��������Ϊ��%d",t);
	//printf("\n\n���������������� ��������������\n");
	//printf("������Ҫ��������֣�");
	//scanf("%d",&i);
	//insert(list1,i);
	//display(list1);
	//printf("\n\n���������������� ��������������\n");	
	//printf("������Ҫ���ҵ�Ԫ�أ�");
	//scanf("%d",&f);
	//findElem(list1,f);
}

//int main(){
//	sqList();
//}


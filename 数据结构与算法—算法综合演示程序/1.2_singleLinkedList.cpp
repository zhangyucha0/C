#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n �����ּ�ѡ��Ҫִ�еĲ�����");  //������� 
#define AnyKeyReturn() printf("\n\n�밴������������˵�...");

typedef int ElemType;  //�����ַ� "ElemType" == int���ͣ� 

//����ṹ��LNode
typedef struct LNode{   
	ElemType data;
	struct LNode *next;  //����*nextΪLNode�ṹ��ָ��(����¸��ڵ�ĵ�ַ�� 
}LNode,*LinkedList;  //����LNodeΪ�ýṹ��ṹ�ĺ�����*LinkedListΪ�ýṹ��ṹ��ָ�� 

//��ʼ��ͷ��� 
void initLinkedList(LinkedList &L){
	L = (LNode *)malloc(sizeof(LNode));
	L->data = -1;
	L->next = NULL;
}

//�жϵ������Ƿ�Ϊ�� 
int isEmpty(LinkedList L){
	if(L->next==NULL)
		return 1;
	else
		return 0;
}

//����������ӽڵ� 
void insert(LinkedList &L,ElemType e){
	LinkedList p = (LNode *)malloc(sizeof(LNode));  //�·���һ���ڵ�ռ䲢��ָ��Pָ�� 
	p->data = e;  //��p��ָ�Ŀռ��data��ֵΪe 
	p->next = L->next;  //��p��ָ�ռ��next��ָ��L��ָ�ռ��next�� 
	L->next = p;  //��L��ָ�ռ��next��ָ��ָ��p 
}

//��ʾ��ǰ����������� 
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
		printf("\t\t\t������������������������������������\n");
		printf("\t\t\t��   �����ݽṹ���㷨���㷨��ʾ   ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
		printf("\t\t\t��         ѧ�ţ�150809313        ��\n");
		printf("\t\t\t��         ����������           ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��             ������             ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��         1.��ʼ��ͷ���         ��\n");
    	printf("\t\t\t��         2.�ж��Ƿ�Ϊ��         ��\n");
    	printf("\t\t\t��         3.����½ڵ�           ��\n");
    	printf("\t\t\t��         4.�ϲ�����������       ��\n");
    	printf("\t\t\t��         5.�������˵�           ��\n");
    	printf("\t\t\t������������������������������������\n");
    	printf("\n");
    	if(judge!=1){
    		display(La); 
			display(Lb);
    	}
		display(Lc);
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 5) //����3����ѭ�����˳�����
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
        		printf("\n ������Ҫ�жϵ�������ţ�"); 
        		scanf("%d",&List);
        		if(List==1){
					if(isEmpty(La))
						printf(" ���� %d Ϊ��\n",List);
					else
						printf(" ���� %d ��Ϊ��\n",List);
				}else if(List==2){
					if(isEmpty(La))
						printf(" ���� %d Ϊ��\n",List);
					else
						printf(" ���� %d ��Ϊ��\n",List);						
				}else if(List==3){
					if(isEmpty(La))
						printf(" ���� %d Ϊ��\n",List);
					else
						printf(" ���� %d ��Ϊ��\n",List);						
				}
				printf("\n");	
        		printf("****************************\n");
				system("pause");
        		system("cls");
            	break;
        	case 3:
        		printf("*****************************\n");
				printf("\n ������������źͲ��������(�Կո����): ");
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
        	default:  //���������������siwtch��䣬������һ��ѭ��
        		system("cls");
            	printf("��������ֲ���ȷ\n");
            	break;
    	}
    }
        
//	initLinkedList(L);
//	if(isEmpty(L))
//		printf("������\n");
//	else
//		printf("�ǿ�����\n");
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
 

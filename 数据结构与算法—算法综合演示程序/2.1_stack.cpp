#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n �����ּ�ѡ��Ҫִ�еĲ�����");  //������� 
#define AnyKeyReturn() printf("\n\n�밴������������˵�...");

int count=0;
typedef int SElemType;
typedef struct{
	SElemType *base;
	SElemType *top;
	int stacksize;
}SqStack;

void initStack(SqStack &s){
	s.base = (SElemType *)malloc(20*sizeof(SElemType));
	s.top = s.base;
	s.stacksize = 20;
}

void Push(SqStack &s,int e){ //��ջ
	if((s.top-s.base)>=s.stacksize){
		exit(0);
	}
	*(s.top)=e;
	s.top++;
	count++;
}

void Pop(SqStack &s,int &e){ //��ջ 
	if(s.top==s.base)
		exit(0);
	s.top--;
 	e=*(s.top);
	count--;
}

void PopAll(SqStack &s){
	int i,e;
	int max=count;
	count=0;
	printf("%d",max);
	if(count!=0){
		for(i=1;i<=max;i++){
			Pop(s,e); 		
		}
	}
}

void display(SqStack s){
	int i;
//	printf("%d",count);
	printf("\t\t\tջ����Ϊ��\n"); 
	if(count>0){
		printf("\t\t\t\t      ��������\n");
		for(i=1;i<=count;i++){
			s.top--;
			if(*(s.top)/10==0)
				printf("\t\t\t\t      �� %d  ��\n",*(s.top));
			else if(*(s.top)/10!=0)
				printf("\t\t\t\t      �� %d ��\n",*(s.top));
			if(i!=count)
				printf("\t\t\t\t      �ǩ�����\n");		
		}
		printf("\t\t\t\t      ��������\n");
		for(i=1;i<=count;i++){
			s.top++;
		}
	}else if(count==0){
		printf("\t\t\t\t      ջΪ��\n");
	}else{
		printf("ERROR��count=%d",count);
	}
}

void stack(){
	SqStack s;
	initStack(s);
	int e;
	int in; 
	int x;
    while (1) {
		printf("\t\t\t������������������������������������\n");
    	printf("\t\t\t��   �����ݽṹ���㷨���㷨��ʾ   ��\n");
    	printf("\t\t\t�ǩ���������������������������������\n");
		printf("\t\t\t��         ѧ�ţ�150809313        ��\n");
   		printf("\t\t\t��         ����������           ��\n");
		printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��               ջ               ��\n");
    	printf("\t\t\t�ǩ���������������������������������\n");
    	printf("\t\t\t��           1.��ʼ��             ��\n");
    	printf("\t\t\t��           2.��ջ               ��\n");
    	printf("\t\t\t��           3.��ջ               ��\n");
    	printf("\t\t\t��           4.�������˵�         ��\n");
    	printf("\t\t\t������������������������������������\n");
    	printf("\n");
		display(s);
    	GetOpNum();    
    	scanf("%d", &x);
    	if (x == 4) //����4����ѭ�����˳�����
    		break;
         	
    	switch (x) {
         	case 1:
				PopAll(s);
//				initStack(s);
				system("cls"); 
              	break;
         	case 2:
         		printf("****************************\n");
         		printf(" ��������ջ�����ݣ�");
				scanf("%d",&in);
				Push(s,in);
        		system("cls");
            	break;
          	case 3:
          		printf("*****************************\n");
				Pop(s,e);
				printf("\n ��ջ����Ϊ:%d\n",e);
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
	
//	Push(s,1);
//	Push(s,2);
//	Push(s,5);
//	display(s);
//	Pop(s,e);
//	printf("��ջ����Ϊ:%d\n",e);
//	display(s);

}

//int main(){
//	stack();
//}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

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

void Push(SqStack &s,int e){ //入栈
	if((s.top-s.base)>=s.stacksize){
		exit(0);
	}
	*(s.top)=e;
	s.top++;
	count++;
}

void Pop(SqStack &s,int &e){ //出栈 
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
	printf("\t\t\t栈内容为：\n"); 
	if(count>0){
		printf("\t\t\t\t      ┏━━┓\n");
		for(i=1;i<=count;i++){
			s.top--;
			if(*(s.top)/10==0)
				printf("\t\t\t\t      ┃ %d  ┃\n",*(s.top));
			else if(*(s.top)/10!=0)
				printf("\t\t\t\t      ┃ %d ┃\n",*(s.top));
			if(i!=count)
				printf("\t\t\t\t      ┣━━┫\n");		
		}
		printf("\t\t\t\t      ┗━━┛\n");
		for(i=1;i<=count;i++){
			s.top++;
		}
	}else if(count==0){
		printf("\t\t\t\t      栈为空\n");
	}else{
		printf("ERROR：count=%d",count);
	}
}

void stack(){
	SqStack s;
	initStack(s);
	int e;
	int in; 
	int x;
    while (1) {
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
    	printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
    	printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
   		printf("\t\t\t┃         姓名：张禹超           ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃               栈               ┃\n");
    	printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃           1.初始化             ┃\n");
    	printf("\t\t\t┃           2.入栈               ┃\n");
    	printf("\t\t\t┃           3.出栈               ┃\n");
    	printf("\t\t\t┃           4.返回主菜单         ┃\n");
    	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
    	printf("\n");
		display(s);
    	GetOpNum();    
    	scanf("%d", &x);
    	if (x == 4) //输入4跳出循环，退出程序
    		break;
         	
    	switch (x) {
         	case 1:
				PopAll(s);
//				initStack(s);
				system("cls"); 
              	break;
         	case 2:
         		printf("****************************\n");
         		printf(" 请输入入栈的内容：");
				scanf("%d",&in);
				Push(s,in);
        		system("cls");
            	break;
          	case 3:
          		printf("*****************************\n");
				Pop(s,e);
				printf("\n 出栈内容为:%d\n",e);
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
	
//	Push(s,1);
//	Push(s,2);
//	Push(s,5);
//	display(s);
//	Pop(s,e);
//	printf("出栈内容为:%d\n",e);
//	display(s);

}

//int main(){
//	stack();
//}

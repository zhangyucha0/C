#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

int H[100] = {12,'X','T','O','G','S','M','N','A','E','R','A','I'};
void siftUp(){
	int k = H[0];
	while(1){
		if(k/2>0 && H[k]>H[k/2]){
			int temp = H[k];
			H[k] = H[k/2];
			H[k/2] = temp;
			k=k/2;
		}else{
			break;
		}
	}	
}

void siftDown(){
	int v = H[1];
	int k = 1;
	while(2*k<=H[0]){
		if(2*k+1<=H[0] && H[2*k+1]>H[2*k])
			k = 2*k+1;
		else
			k = 2*k;
		if(v<H[k])
			H[k/2] = H[k];
		else
			break;
	}
	H[k] = v;
}

void insert(int x){
	H[0]++;
	H[H[0]] = x;
	siftUp();	
}

int deletel(){
	int e = H[1];
	H[1] = H[H[0]];
	H[0]--;
	siftDown();
	return e;
}


void heap(){
	int i;
	char str;
	int x;
	while (1) {
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
		printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
		printf("\t\t\t┃         姓名：张禹超           ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃               堆               ┃\n");
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
    	printf("\t\t\t┃            1.添加              ┃\n");
    	printf("\t\t\t┃            2.返回主菜单        ┃\n");
    	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
    	printf("\n\t\t\t ");
		for(i=1;i<H[0];i++){
			printf("%c ",H[i]);
		}
		printf("\n");
    	GetOpNum();    
    	scanf("%d", &x);
    	printf("\n");
    	if (x == 2) //输入2跳出循环，退出程序
    		break;
        	
    	switch (x) {
        	case 1:
        		printf("****************************\n");
        		printf(" 请输入要插入的字符：");
        		scanf("%s",&str);
				insert(str);
        		system("cls");
            	break;				                	
        	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
        		system("cls");
            	printf("输入的数字不正确\n");
            	break;
    	}
    }
	
	
//	insert('Z');
//	insert('M');
//	for(i=1;i<H[0];i++){
//		printf("%c ",H[i]);
//	}
}

//int main(){
//	heap();
//}

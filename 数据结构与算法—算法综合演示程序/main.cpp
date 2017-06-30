# include "stdio.h"  //头文件 
# include "stdlib.h"  //system() 、malloc() 
# include "conio.h"  //getch() 非C标准库中的头文件 
# include "1.1_sqList.cpp"  //引入文件 
# include "1.2_singleLinkedList.cpp"
# include "2.1_stack.cpp"
# include "2.2_stack_Convert.cpp"
# include "3_queue.cpp"
# include "4.1_treeWithStack.cpp"
# include "4.2_treeOrder.cpp"
# include "5_heap.cpp"
# include "6.1_adjacencyMatrix.cpp"
# include "6.2_ajdacencyList.cpp"
# include "6.3_adjacencyMatrixDepth.cpp"
# include "6.4_adjacencyListDepth.cpp"
# include "7.1_quickSort.cpp"
# include "7.2_bubbleSort.cpp"
# include "7.3_selectionSort.cpp"
# include "7.4_insertionSort.cpp"
#define GetOpNum() printf("\n 按数字键选择要执行的操作：");  //定义语句 
#define AnyKeyReturn() printf("\n\n请按任意键返回主菜单...");

//界面表头-作者信息 
void titleInf(){
		printf("\t\t\t┏━━━━━━━━━━━━━━━━┓\n");
    	printf("\t\t\t┃   《数据结构与算法》算法演示   ┃\n");
    	printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
		printf("\t\t\t┃         学号：150809313        ┃\n");
    	printf("\t\t\t┃         姓名：张禹超           ┃\n");
} 

//二级菜单-线性表菜单 
void LV2_SqListMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃             线性表             ┃\n");
    		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃           1.顺序表             ┃\n");
        	printf("\t\t\t┃           2.单链表             ┃\n");
        	printf("\t\t\t┃           3.返回主菜单         ┃\n");
        	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        	GetOpNum();  //头文件中定义的打印语句 "按数字键选择要执行的操作："    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3)  //输入3跳出循环，退出程序
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		sqList();  //要执行的函数（顺序表函数）  
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		singleLinkedList();  //单链表函数 
            		system("cls");
                	break;
            	case 3:
                	break;
            	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
            		system("cls");
                	printf("输入的数字不正确\n");
                	break;
        	}
        }
}

//二级菜单-栈 
void LV2_StackMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃               栈               ┃\n");
    		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃          1.栈的演示            ┃\n");
        	printf("\t\t\t┃          2.栈的实际应用        ┃\n");
        	printf("\t\t\t┃          3.返回主菜单          ┃\n");
        	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3) //输入3跳出循环，退出程序
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		stack();
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		stack_Convert();
            		AnyKeyReturn();  //头文件中定义的打印语句 "请按任意键返回主菜单..."（与getch()连用） 
            		getch(); 
            		system("cls");
                	break;
            	case 3:
                	break;
            	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
            		system("cls");
                	printf("输入的数字不正确\n");
                	break;
        	}
        }
}

//二级菜单-树
void LV2_TreeMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃              树                ┃\n");
    		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃       1.树的创建               ┃\n");
        	printf("\t\t\t┃       2.先序、中序、后序       ┃\n");
        	printf("\t\t\t┃       3.返回主菜单             ┃\n");
        	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3) //输入3跳出循环，退出程序
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		treeWithStack(); 
            		AnyKeyReturn();
            		getch();
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		treeOrder();  
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;
            	case 3:
                	break;
            	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
            		system("cls");
                	printf("输入的数字不正确\n");
                	break;
        	}
        }
}

//二级菜单-图 
void LV2_GraphMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃              图                ┃\n");
    		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃      1.邻接矩阵                ┃\n");
        	printf("\t\t\t┃      2.邻接表                  ┃\n");
        	printf("\t\t\t┃      3.邻接矩阵-深度遍历算算法 ┃\n");
        	printf("\t\t\t┃      4.邻接表-深度遍历算法     ┃\n");
        	printf("\t\t\t┃      5.返回主菜单              ┃\n");        	
        	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 5) //输入5跳出循环，退出程序
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		adjacencyMatrix(); 
            		AnyKeyReturn();
            		getch();
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		ajdacencyList();  
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;
                case 3:
            		system("cls");
            		adjacencyMatrixDepth();  
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;
				case 4:
            		system("cls");
            		adjacencyListDepth(); 
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;	
            	case 5:
                	break;
            	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
            		system("cls");
                	printf("输入的数字不正确\n");    	
                	break;
        	}
        }
}

//二级菜单-排序 
void LV2_SortMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃              排序              ┃\n");
    		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        	printf("\t\t\t┃          1.快速排序            ┃\n");
        	printf("\t\t\t┃          2.冒泡排序            ┃\n");
        	printf("\t\t\t┃          3.选择排序            ┃\n");
        	printf("\t\t\t┃          4.插入排序            ┃\n");
        	printf("\t\t\t┃          5.返回主菜单          ┃\n");        	
        	printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 5) //输入5跳出循环，退出程序
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		quickSort(); 
            		AnyKeyReturn();
            		getch();
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		bubbleSort();  
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;
                case 3:
            		system("cls");
            		selectionSort();  
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;
				case 4:
            		system("cls");
            		insertionSort(); 
            		AnyKeyReturn();
            		getch();
            		system("cls");
                	break;	
            	case 5:
                	break;
            	default:  //数字输入错误，跳出siwtch语句，进入下一次循环
            		system("cls");
                	printf("输入的数字不正确\n");    	
                	break;
        	}
        }
}

//主菜单 
void LV1_MainMenu(){  
	system("color 0E");
    int x;
    while (1) {
		titleInf();
		printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        printf("\t\t\t┃             主菜单             ┃\n");		
    	printf("\t\t\t┣━━━━━━━━━━━━━━━━┫\n");
        printf("\t\t\t┃           1.线性表             ┃\n");
        printf("\t\t\t┃           2.栈                 ┃\n");
        printf("\t\t\t┃           3.队列               ┃\n");
        printf("\t\t\t┃           4.树                 ┃\n");
        printf("\t\t\t┃           5.堆                 ┃\n");
        printf("\t\t\t┃           6.图                 ┃\n");
        printf("\t\t\t┃           7.排序               ┃\n");        
        printf("\t\t\t┃           8.退出程序           ┃\n");
        printf("\t\t\t┗━━━━━━━━━━━━━━━━┛\n");
        GetOpNum();     
        scanf("%d", &x);
        printf("\n");
        
        if (x == 8) //输入8跳出循环，退出程序
            break;

        switch (x) {
            case 1:
            	system("cls");
				LV2_SqListMenu();
				system("cls"); 
                break;
            case 2:
            	system("cls");
				LV2_StackMenu();
            	system("cls");
                break;
            case 3:
            	system("cls");
 				queue();
            	system("cls");
                break;
            case 4:
            	system("cls");
            	LV2_TreeMenu(); 
            	system("cls");
                break;
            case 5:
            	system("cls");
 				heap();
            	system("cls");
                break;
            case 6:
            	system("cls");
            	LV2_GraphMenu();
            	system("cls");
                break;
            case 7:
            	system("cls");
            	LV2_SortMenu();
            	system("cls");
                break;
            default: //数字输入错误，跳出siwtch语句，进入下一次循环
            	system("cls");
                printf("输入的数字不正确\n");
                break;
        }
    }
}

int main() {
	LV1_MainMenu();
    return 0;
}

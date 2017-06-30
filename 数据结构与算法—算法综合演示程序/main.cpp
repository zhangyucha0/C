# include "stdio.h"  //ͷ�ļ� 
# include "stdlib.h"  //system() ��malloc() 
# include "conio.h"  //getch() ��C��׼���е�ͷ�ļ� 
# include "1.1_sqList.cpp"  //�����ļ� 
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
#define GetOpNum() printf("\n �����ּ�ѡ��Ҫִ�еĲ�����");  //������� 
#define AnyKeyReturn() printf("\n\n�밴������������˵�...");

//�����ͷ-������Ϣ 
void titleInf(){
		printf("\t\t\t������������������������������������\n");
    	printf("\t\t\t��   �����ݽṹ���㷨���㷨��ʾ   ��\n");
    	printf("\t\t\t�ǩ���������������������������������\n");
		printf("\t\t\t��         ѧ�ţ�150809313        ��\n");
    	printf("\t\t\t��         ����������           ��\n");
} 

//�����˵�-���Ա�˵� 
void LV2_SqListMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��             ���Ա�             ��\n");
    		printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��           1.˳���             ��\n");
        	printf("\t\t\t��           2.������             ��\n");
        	printf("\t\t\t��           3.�������˵�         ��\n");
        	printf("\t\t\t������������������������������������\n");
        	GetOpNum();  //ͷ�ļ��ж���Ĵ�ӡ��� "�����ּ�ѡ��Ҫִ�еĲ�����"    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3)  //����3����ѭ�����˳�����
        		break;
            	
        	switch (x) {
            	case 1:
            		system("cls");
            		sqList();  //Ҫִ�еĺ�����˳�������  
					system("cls"); 
               		break;
            	case 2:
            		system("cls");
            		singleLinkedList();  //�������� 
            		system("cls");
                	break;
            	case 3:
                	break;
            	default:  //���������������siwtch��䣬������һ��ѭ��
            		system("cls");
                	printf("��������ֲ���ȷ\n");
                	break;
        	}
        }
}

//�����˵�-ջ 
void LV2_StackMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��               ջ               ��\n");
    		printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��          1.ջ����ʾ            ��\n");
        	printf("\t\t\t��          2.ջ��ʵ��Ӧ��        ��\n");
        	printf("\t\t\t��          3.�������˵�          ��\n");
        	printf("\t\t\t������������������������������������\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3) //����3����ѭ�����˳�����
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
            		AnyKeyReturn();  //ͷ�ļ��ж���Ĵ�ӡ��� "�밴������������˵�..."����getch()���ã� 
            		getch(); 
            		system("cls");
                	break;
            	case 3:
                	break;
            	default:  //���������������siwtch��䣬������һ��ѭ��
            		system("cls");
                	printf("��������ֲ���ȷ\n");
                	break;
        	}
        }
}

//�����˵�-��
void LV2_TreeMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��              ��                ��\n");
    		printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��       1.���Ĵ���               ��\n");
        	printf("\t\t\t��       2.�������򡢺���       ��\n");
        	printf("\t\t\t��       3.�������˵�             ��\n");
        	printf("\t\t\t������������������������������������\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 3) //����3����ѭ�����˳�����
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
            	default:  //���������������siwtch��䣬������һ��ѭ��
            		system("cls");
                	printf("��������ֲ���ȷ\n");
                	break;
        	}
        }
}

//�����˵�-ͼ 
void LV2_GraphMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��              ͼ                ��\n");
    		printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��      1.�ڽӾ���                ��\n");
        	printf("\t\t\t��      2.�ڽӱ�                  ��\n");
        	printf("\t\t\t��      3.�ڽӾ���-��ȱ������㷨 ��\n");
        	printf("\t\t\t��      4.�ڽӱ�-��ȱ����㷨     ��\n");
        	printf("\t\t\t��      5.�������˵�              ��\n");        	
        	printf("\t\t\t������������������������������������\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 5) //����5����ѭ�����˳�����
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
            	default:  //���������������siwtch��䣬������һ��ѭ��
            		system("cls");
                	printf("��������ֲ���ȷ\n");    	
                	break;
        	}
        }
}

//�����˵�-���� 
void LV2_SortMenu(){
	    int x;
    	while (1) {
			titleInf(); 
			printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��              ����              ��\n");
    		printf("\t\t\t�ǩ���������������������������������\n");
        	printf("\t\t\t��          1.��������            ��\n");
        	printf("\t\t\t��          2.ð������            ��\n");
        	printf("\t\t\t��          3.ѡ������            ��\n");
        	printf("\t\t\t��          4.��������            ��\n");
        	printf("\t\t\t��          5.�������˵�          ��\n");        	
        	printf("\t\t\t������������������������������������\n");
        	GetOpNum();    
        	scanf("%d", &x);
        	printf("\n");
        	if (x == 5) //����5����ѭ�����˳�����
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
            	default:  //���������������siwtch��䣬������һ��ѭ��
            		system("cls");
                	printf("��������ֲ���ȷ\n");    	
                	break;
        	}
        }
}

//���˵� 
void LV1_MainMenu(){  
	system("color 0E");
    int x;
    while (1) {
		titleInf();
		printf("\t\t\t�ǩ���������������������������������\n");
        printf("\t\t\t��             ���˵�             ��\n");		
    	printf("\t\t\t�ǩ���������������������������������\n");
        printf("\t\t\t��           1.���Ա�             ��\n");
        printf("\t\t\t��           2.ջ                 ��\n");
        printf("\t\t\t��           3.����               ��\n");
        printf("\t\t\t��           4.��                 ��\n");
        printf("\t\t\t��           5.��                 ��\n");
        printf("\t\t\t��           6.ͼ                 ��\n");
        printf("\t\t\t��           7.����               ��\n");        
        printf("\t\t\t��           8.�˳�����           ��\n");
        printf("\t\t\t������������������������������������\n");
        GetOpNum();     
        scanf("%d", &x);
        printf("\n");
        
        if (x == 8) //����8����ѭ�����˳�����
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
            default: //���������������siwtch��䣬������һ��ѭ��
            	system("cls");
                printf("��������ֲ���ȷ\n");
                break;
        }
    }
}

int main() {
	LV1_MainMenu();
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define C 8
void select_sort(int a[],int n);
//ѡ������ʵ��
void select_sort(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //����C-1��ѡ��
    for(int i=0; i<n-1; i++)
    {
        int min_index = i; 
        //�ҳ���iС�������ڵ�λ��
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        //����iС���������ڵ�i��λ�ã�����պã��Ͳ��ý���
        if( i != min_index)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}

void selectionSort(){
	int num[C] = {89, 38, 11, 78, 96, 44, 19, 25};
    printf("����ǰ\n");
    for(int i=0; i<C; i++)
        printf("%d  ", num[i]);
    select_sort(num, C);
    printf("\n\n�����\n");
    for(int i=0; i<C; i++)
        printf("%d  ", num[i]);
    //printf("\n");
    //system("pause");
}

//int  main(){
//	selectionSort();
//    return 0;
//}


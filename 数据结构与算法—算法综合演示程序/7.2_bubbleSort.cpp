#include<stdio.h>
#include<stdlib.h>
#define B 8
void bubble_sort(int a[],int n);
//һ��ʵ��
void bubble_sort(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //һ������B-1�ֱȽ�
    for(int i=0; i<n-1; i++)
    {
        //ÿһ�ֱȽ�ǰn-1-i������������õ����i�����ñȽ�
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
//�Ż�ʵ��
void bubble_sort_better(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //������B-1�ֱȽ�
    for(int i=0; i<n-1; i++)
    {
        bool isSorted = true;
        //ÿһ�ֱȽ�ǰn-1-i������������õ����i�����ñȽ�
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                isSorted = false;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
        if(isSorted) break; //���û�з���������˵�������Ѿ��������
    }
}

void bubbleSort(){
	int i;
    int num[B] = {89, 38, 11, 78, 96, 44, 19, 25};
    printf("����ǰ \n");
    for(i=0;i<B;i++)
        printf("%d  ",num[i]);
    bubble_sort(num, B); //����ʹ��bubble_sort_better(num, B);
    printf("\n\n����� \n");
    for(int i=0; i<B; i++)
        printf("%d  ", num[i]);
    //printf("\n");
    //system("pause");	
}

//int  main(){
//	bubbleSort();
//    return 0;
//}

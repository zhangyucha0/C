#include<stdio.h>
#include<stdlib.h>
#define D 8
void insert_sort(int a[],int n);
//��������ʵ��,���ﰴ��С��������
void insert_sort(int a[],int n)//nΪ����a��Ԫ�ظ���
{
    //����D-1�ֲ������
    for(int i=1; i<n; i++)
    {
        //�����ҵ�Ԫ��a[i]��Ҫ�����λ��
        int j=0;
        while( (a[j]<a[i]) && (j<i))
        {
            j++;
        }
        //��Ԫ�ز��뵽��ȷ��λ��
        if(i != j)  //���i==j��˵��a[i]�պ�����ȷ��λ��
        {
            int temp = a[i];
            for(int k = i; k > j; k--)
            {
                a[k] = a[k-1];
            }
            a[j] = temp;
        }
    }
}

void insertionSort(){
	int num[D] = {89, 38, 11, 78, 96, 44, 19, 25};
    printf("����ǰ\n");
    for(int i=0; i<D; i++)
        printf("%d  ", num[i]);
    insert_sort(num, D);
    printf("\n\n�����\n");
    for(int i=0; i<D; i++)
        printf("%d  ", num[i]);
    //printf("\n");
    //system("pause");
} 

//int  main()
//{
//	insertionSort();
//}

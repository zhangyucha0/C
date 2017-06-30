#include<stdio.h>
#include<stdlib.h>
#define C 8
void select_sort(int a[],int n);
//选择排序实现
void select_sort(int a[],int n)//n为数组a的元素个数
{
    //进行C-1轮选择
    for(int i=0; i<n-1; i++)
    {
        int min_index = i; 
        //找出第i小的数所在的位置
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        //将第i小的数，放在第i个位置；如果刚好，就不用交换
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
    printf("排序前\n");
    for(int i=0; i<C; i++)
        printf("%d  ", num[i]);
    select_sort(num, C);
    printf("\n\n排序后\n");
    for(int i=0; i<C; i++)
        printf("%d  ", num[i]);
    //printf("\n");
    //system("pause");
}

//int  main(){
//	selectionSort();
//    return 0;
//}


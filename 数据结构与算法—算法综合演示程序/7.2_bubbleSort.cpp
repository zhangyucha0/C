#include<stdio.h>
#include<stdlib.h>
#define B 8
void bubble_sort(int a[],int n);
//一般实现
void bubble_sort(int a[],int n)//n为数组a的元素个数
{
    //一定进行B-1轮比较
    for(int i=0; i<n-1; i++)
    {
        //每一轮比较前n-1-i个，即已排序好的最后i个不用比较
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
//优化实现
void bubble_sort_better(int a[],int n)//n为数组a的元素个数
{
    //最多进行B-1轮比较
    for(int i=0; i<n-1; i++)
    {
        bool isSorted = true;
        //每一轮比较前n-1-i个，即已排序好的最后i个不用比较
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
        if(isSorted) break; //如果没有发生交换，说明数组已经排序好了
    }
}

void bubbleSort(){
	int i;
    int num[B] = {89, 38, 11, 78, 96, 44, 19, 25};
    printf("排序前 \n");
    for(i=0;i<B;i++)
        printf("%d  ",num[i]);
    bubble_sort(num, B); //或者使用bubble_sort_better(num, B);
    printf("\n\n排序后 \n");
    for(int i=0; i<B; i++)
        printf("%d  ", num[i]);
    //printf("\n");
    //system("pause");	
}

//int  main(){
//	bubbleSort();
//    return 0;
//}

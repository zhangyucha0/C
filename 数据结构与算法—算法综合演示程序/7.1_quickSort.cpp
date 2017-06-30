#include <stdio.h>
#include <stdlib.h>
#define A 6
int partition(int arr[], int low, int high){
    int key;
    key = arr[low];
    while(low<high){
        while(low <high && arr[high]>= key )
            high--;
        if(low<high)
            arr[low++] = arr[high];
        while( low<high && arr[low]<=key )
            low++;
        if(low<high)
            arr[high--] = arr[low];
    }
    arr[low] = key;
    return low;
}
void quick_sort(int arr[], int start, int end){
    int pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}

void quickSort(){
	int i;
    int arr[A]={32,12,7, 78, 23,45};
    printf("ÅÅÐòÇ° \n");
    for(i=0;i<A;i++)
        printf("%d  ",arr[i]);
    quick_sort(arr,0,A-1);
    printf("\n\nÅÅÐòºó \n");
    for(i=0; i<A; i++)
        printf("%d  ", arr[i]);
    //printf ("\n\n");	
}

//int main(void){
//	quickSort();
//    return 0;
//}

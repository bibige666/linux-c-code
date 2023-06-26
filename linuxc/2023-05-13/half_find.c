//折半查找 二分查找
#include <stdio.h>
int half_find(int arr[],int size,int data)
{
    int left=0;//左侧边界
    int right=size-1;//右侧边界
    while(left<=right){
        //中间元素下标
        int mid=(left+right)/2;
        if(data<arr[mid]){//在中心左侧继续找
            right=mid-1;
        }else if(data >arr[mid]){//在中心右侧继续找
            left=mid+1;
        }else{//找到了
            return mid;//返回元素下标
        }
    }
    return -1;
}
int main(void){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int ret=half_find(arr,9,5);
    printf("ret =%d\n",ret);
    return 0;
}


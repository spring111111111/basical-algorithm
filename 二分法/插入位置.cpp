//插入位置
//相邻LR，（L+R）/2必定为L，故插值在L右侧L=0除外
//version

#include <iostream>
#include <string>

using namespace std;

#define target 0

int num[] = {1,3,5,7,9,11,13,15,17,19};

//左闭右闭
int search(int *arr,int size,int tar)
{
    int left = 0,right = size - 1;
    int mid = 0;
    while(left <= right)
    {
        mid = (left+right)/2;
        if(arr[mid] == tar)
        return mid;
        else if(arr[mid] < tar)
        left = mid +1;
        else if(arr[mid] >tar)
        right = mid - 1;
    }   
    return mid+1; 
}

int main()
{
    if(target < num[0])
    cout <<"insert target at index:0"<<endl;
    else
    {
        int index = search(num,sizeof(num)/sizeof(num[0]),target);
        if(index != -1)
        cout <<"found target at index:"<<index<<endl;
        else
        cout <<"not found target"<<endl;
    }
    
    system("pause");
    return 0;
}
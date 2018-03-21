#include<iostream>
#include<string.h>
using namespace std;
void AdjustHeap(int arr[],int len,int index)
{
    int tmp=index;
    int left =2*tmp+1;
    while(left<=len)
    {
        if(left+1<=len&&arr[left]<arr[left+1])
            left++;
        if(arr[tmp]>arr[left])
            return;
        else
            swap(arr[tmp],arr[left]);
        tmp=left;
        left=2*tmp+1;
    }
}
void HeapSort(int arr[],int len)
{
    for(int i=len/2-1;i>=0;i--)
     {
       AdjustHeap(arr,len-1,i);
     }
     for(int i=len-1;i>0;i--)
     {
          swap(arr[0],arr[i]);
          AdjustHeap(arr,i-1,0);
     }
}
int main()
{
    int arr[]={12,-110,-10,3,6,23,-1,5,8,6,7,10,32};
    int len=sizeof(arr)/sizeof(int);
    HeapSort(arr,len-1);
    for(int i=0;i<len-1;i++)
        cout<<arr[i]<<" ";

}

#include<iostream>
using namespace std;

void Merge(int arr[],int starts,int mid,int ends,int res[])
{
    int i=starts;
    int j=mid+1;
    int k=0;
    while(i<=mid&&j<=ends)
    {
        if(arr[i]<arr[j])
        {
            res[k++]=arr[i++];
        }
        else
        {
          res[k++]=arr[j++];
        }
    }
    while(i<=mid) res[k++]=arr[i++];
    while(j<=ends) res[k++]=arr[j++];
    for(i=0;i<k;i++)
        arr[starts+i]=res[i];
}
void MergeSort(int arr[],int starts,int ends,int res[])
{
    int mid =(starts+ends)/2;
    if(starts<ends)
    {
        MergeSort(arr,starts,mid,res);
        MergeSort(arr,mid+1,ends,res);
        Merge(arr,starts,mid,ends,res);
    }
}
int main()
{
    int arr[]={1,2,3,4,15,11,5,9,8,14,34,7,6};
    int len =sizeof(arr)/sizeof(int);
    int res[len];
    MergeSort(arr,0,len-1,res);
    for(int i=0;i<len;i++)
    cout<<res[i]<< " ";
}

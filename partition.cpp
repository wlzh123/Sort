#include<iostream>
using namespace std;

int partiton(int ar[],int first,int last){
    int temp=ar[first];
    while(first<last){
        while(ar[last]>temp&&first<last){
            last--;
        }
        ar[first]=ar[last];
        while(ar[first]<=temp&&first<last){
            first++;
        }
        ar[last]=ar[first];
    }
    ar[first]=temp;
    return first;
}
int main(){
    int arr[]={3,2,3,4,5,6,7,8};
    int res= partiton(arr,0,8);
    cout<<res<<endl;
    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
}

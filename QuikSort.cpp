#include<iostream>
using namespace std;

void Quik_sort(int a[],int first,int last){
    if(first>=last)
        return;
    int front =first;
    int back  =last;
    int tmp=a[first];
    while(back>front){
        while( a[back]>=tmp&&back>front){
            back--;
        }
        a[front]=a[back];

        while( a[front]<=tmp&&back>front){
        front++;
        }
        a[back]=a[front];
    }
    a[front]=tmp;
    Quik_sort(a,first,front-1);
    Quik_sort(a,front+1,last);
}
int main(){

    int arr[]={1,2,3,4,5,6,8,7,9};
    Quik_sort(arr,0,8);
    for(int i=0;i<=8;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}

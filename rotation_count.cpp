////////---------Rotation count in a unsorted Array------------////////
#include<iostream>
using namespace std;

int Rotations(int arr[],int size){
    int min = arr[0];
    int index = 0;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
            index = i;
        }
    }
    
    return index;
}
int main(){
    int arr[] = {15,18,2,3,6,12};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<Rotations(arr,size);
    return 0;
}

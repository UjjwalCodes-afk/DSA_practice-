///Search an element in a sorted and rotated Array Using Linear Search// 

#include<iostream>
using namespace std;

int Rotate(int arr[],int size,int selement){
    int temp = arr[size-1];
    int temp1 = arr[size-2];
    
    for(int j=size-1;j>=0;--j){
        arr[j] = arr[j-2];
    }
    arr[0] = temp1;
    arr[1] = temp;
    cout<<"elements after rotation are: "<<endl;

    for(int j=0;j<size;j++){
        cout<<arr[j]<<endl;
        
    }
    cout<<"enter which element ya want to search"<<endl;
    cin>>selement;
    for(int i=0;i<size;i++){
        if(selement==arr[i]){
            cout<<selement <<" is found at index "<<i;
        }
        
    }
    
}


int main(){
    int arr[100],size,selement;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    Rotate(arr,size,selement);
    
     
    return 0;
}
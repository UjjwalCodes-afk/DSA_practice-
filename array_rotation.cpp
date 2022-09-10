#include<iostream>
using namespace std;
int Rotation(int arr[],int size){
    int temp = arr[0];
    int temp1 = arr[1];
    for(int i=0;i<size;i++){
        arr[i] = arr[i+2];
    }
    arr[size-2] = temp;
    arr[size-1] = temp1;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<endl;

    }
}
// int POTD(int arr[],int size){
//     int temp = arr[size-1];
//     for(int j=size-1;j>=0;--j){
//         arr[j] = arr[j-1];
//     }
//     arr[0] = temp;
//     for(int j=0;j<size;j++){
//         cout<<arr[j]<<endl;
//     }
    
// }

// int Deletion(int arr[],int size,int pos)
// {
    
//     for(int i=size-1;i>=pos;--i){
//         arr[i+1] = arr[i];

//     }
//     size--;
//     for(int j=0;j<size;j++){
//         cout<<arr[j]<<endl;
//     }
//     int temp = arr[size-1];
//     cout<<"second rotation: ";
//     for(int i=size-1;i>=0;--i){
//         arr[i] = arr[i-1];

//     }
//     arr[0] = temp;
//     for(int j=0;j<size;j++){
//         cout<<arr[j]<<endl;
//     }
//     cout<<"enter pos from where ya want to delete";
//     cin>>pos;
//     int temp1 = arr[size-1];
//     for(int i=size-1;i>=pos;--i){
//         arr[i+1] = arr[i];
//     }
//     arr[0] = temp;
//     --size;
//     cout<<"Updated List"<<endl;
//     for(int j=0;j<size;j++){
//         cout<<arr[j]<<endl;
//     }
// }



int main(){
    int arr[100],size,pos,pos1;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"elements after rotation are"<<endl;
    Rotation(arr,size);
    
    

   

  
    
  
 
    return 0;
}
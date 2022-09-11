////////////Pairs in array with a given Sum//////////////
#include<iostream>
using namespace std;

int Sum(int arr[],int size,int key){
    int sum = 0;
    int sum1 = 0;
    int i,j;
    for(i=0;i<size;i++){
        sum = sum + arr[i];
        for(j=i+1;j<size;j++){
            if(arr[i]+arr[j]==key){
                cout << "Pair with a given sum " << key << +
        " is (" << arr[i] << ", " << arr[j] << ")" <<
          endl;
            }
            
        
        }
        
    }
    
}

int main(){
    int arr[100],size,key;
    cout<<"enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the given sum"<<endl;
    cin>>key;
    Sum(arr,size,key);
    return 0;
}
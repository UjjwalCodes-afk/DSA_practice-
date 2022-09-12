//Find maximum value of Sum( i*arr[i]) with only rotations on given array allowed/////

#include<bits/stdc++.h>
using namespace std;

int Sum(int a[],int size){
    int sum = 0;     //declaring one var name as sum to calculate the sum of original array
    int sum1 = 0;     //declaring one var name as sum1 to calculate the sum of rotated  array
    cout<<"before rotation the elements are"<<endl;
    for(int i=0;i<size;i++){       //Iterating over each element one by one and calculating their sum with perspective index in a original array
        cout<<a[i]<<endl;
        sum = sum + a[i]*i;        //calculating the sum of original array

    }
    cout<<"After Rotation"<<endl;
    int temp = a[size-2];
    int temp1 = a[size-1];
    for(int j=size-1;j>=0;--j){   ////Iterating over each element one by one and calculating their sum with perspective index in a rotated array
        a[j] = a[j-2];            //calculating the sum of rotated array
    }
    a[0] = temp;
    a[1] = temp1;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
        sum1 = sum1 + a[i]*i;
        
    }
    if(sum>sum1){
        cout<<sum<<"sum is maximum in original array";
    }
    else{
        cout<<sum1<<"is maximum in array after rotation";
    }
   
   



}

int main(){
    int arr[100],size;
    cout<<"enter the size of the array";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  
    Sum(arr,size);

    return 0;

}
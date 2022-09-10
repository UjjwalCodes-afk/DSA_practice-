#include<iostream>
using namespace std;

// int sum(int arr[], int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum = sum + arr[i];
        
//     }
//     return sum;
// }
// int main(){
//     int arr[100],size;
//     cout<<"enter the size of the list";
//     cin>>size;
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"the sum of elements are "<<sum(arr,size);


   
//     return 0;
// }

// int max(int arr[], int n){
//     int max=0,min=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){

//             max = arr[i];
//         }
//         else{
//             min = arr[i];
//         }
//     }
//     return max;
    
// }

// int main(){
//     int arr[100],size;
//     cout<<"enter the size of the list"<<endl;
//     cin>>size;
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"the maximum element in array is"<<max(arr,size);
//     return 0;
    
// }


  //linear search

// int Search(int arr[], int n,int s_element){
//     int ctr =0;
    
//     for(int i=1;i<=n;i++){
//         if(arr[i]==s_element){
//             cout<<"element found at index"<<i<<endl;
            

//         }
//         else{
//             cout<<"not found";
            
//         }

// }
// }


// int main(){
//     int arr[100],size,s_element;
//     cout<<"enter the size of the list"<<endl;
//     cin>>size;
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
        
//     }
//     cout<<"enter the element to be searched"<<endl;
//     cin>>s_element;

//     cout<<Search(arr,size,s_element);
//     return 0;


    


// }


  //Binary search

int Search(int arr[],int low,int high,int x){
    int mid = low+high/2;
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]<x){
        return Search(arr,mid+1,high,x);

    }
    else if(arr[mid]>x){
        return Search(arr,mid-1,high,x);
    }
    if(high<low){
        return -1;
    }
    

}
int main(){
    int size,arr[100],s_element,SearchIndex;
    

    
    
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>s_element;
    SearchIndex=(arr,1,size-1,s_element);
    (SearchIndex == -1);
        
        cout << "Element is present at index " << SearchIndex;
    return 0;


}

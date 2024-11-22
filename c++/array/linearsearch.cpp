#include<iostream>
using namespace std;
bool search(int arr[], int size , int key){
    for(int i =0 ;i<size ; i++){
        if(arr[i] == key){
return 0;
        }
    }
    return 0;
}




int main () { 
        int arr[5] = {5,8,3,7,9};
    cout<<"enter the key element"<<endl;
    int key;
    cin >> key;
    bool found = search(arr ,5 ,key);
    if(found){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
}
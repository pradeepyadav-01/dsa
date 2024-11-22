#include<iostream>
using namespace std;
void printarray( int arr[] ,int size){
cout<<"printing the array"<<endl;
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
cout<<"printing done"<<endl;
}
int main(){
    int number[3];
    printarray(number ,12);
}


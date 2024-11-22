#include<iostream>
using namespace std;
int main(){
 int   arr[5] = {5,6,8,7};
 int   sum = 0;
 int size = 5;
for(int i = 0; i < size ;i++){
    sum  =  arr[i] + sum;
    cout<<"sum of array"<<sum<<endl;
}
}
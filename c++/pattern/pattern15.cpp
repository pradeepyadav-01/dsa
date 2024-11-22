#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
while(row<=n){
    // 1 traingle space
    int space = n - row;
    while(space){
cout<<" ";
space = space - 1;
    }
// 2 triangle
    int col = 1;
    while(col<=row){;
    cout<<col;
    col = col + 1;

}
// 3 traingle
int start = row - 1;
while(start){
    cout<<start;
    start = start - 1;
}
cout<<endl;
row = row + 1 ;
}
}

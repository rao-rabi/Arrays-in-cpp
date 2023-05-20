#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;
    cout<<"Enter an array"<<endl;
    for(int i =0; i<5; i++){
        cin >>arr[i];
    }
    cout<<"sum is:"<<endl;
    for(int  i = 0; i<5;i++)
    {
      sum = sum + arr[i];
    }
    cout<<sum;
}
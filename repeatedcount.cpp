#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int repeatCount = 0;
    
    cout<<"Enter an array"<<endl;
    for(int i =0; i<5; i++){
        cin >>arr[i];
    }


    for(int  i = 0; i<5;i++)
    {
        for(int j = i+1 ; j<5; j++)
        if(arr[i] == arr[j])
        {
            repeatCount++;
            break;
        }
    }
    cout<<"The repeated Numbers total in array is: "<<repeatCount<<endl;;
}

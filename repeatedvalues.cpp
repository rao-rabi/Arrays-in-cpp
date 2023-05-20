#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int duplicateValue;
    
    cout<<"Enter an array"<<endl;
    for(int i =0; i<5; i++){
        cin >>arr[i];
    }


    for(int  i = 0; i<5;i++)
    {
        for(int j = i+1 ; j<5; j++)
        if(arr[i] == arr[j])
        {
            duplicateValue = arr[i];
            break;
        }
    }
    cout<<"The Duplicate number in array is: "<<duplicateValue<<endl;;
}

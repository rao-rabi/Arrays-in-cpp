#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int freq = 0;
    int numFreq;
    
    cout<<"Enter an array"<<endl;
    for(int i =0; i<5; i++){
        cin >>arr[i];
    }

    cout<<"Enter the number to find its frequency: "<<endl;
    cin>>numFreq;

    for(int  i = 0; i<5;i++)
    {
        if(arr[i] == numFreq)
        {
            freq++;
        }
    }

    cout<<"The frequency of "<<numFreq<<" in the array is: "<<freq<<endl;;
<<<<<<< HEAD
}
=======
}
>>>>>>> 0a8f1a0ac8158ea565d32181a9bdae01c971597f

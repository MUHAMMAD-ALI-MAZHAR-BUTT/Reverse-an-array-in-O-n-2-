//For explanation watch video on efficient learning world
#include <iostream>
using namespace std;
int main()
{
    //Declare and initialize integer array
    int arr[8]={8,7,6,5,4,3,2,1};
    //Calculating size of array means total elements in array
    int size=sizeof(arr)/sizeof(arr[0]);
    //Printing Array Elements
    cout<<" Input Array : ";
    for(int i=0;i<size;i++) { cout<<arr[i]<<" "; }
//Reverse an array
 for(int i=0;i<size/2;i++)   
 {
        swap(arr[i],arr[size-i-1]);
 } 
    //Printing Array Elements
    cout<<"\n Output Array : ";
    for(int i=0;i<size;i++) { cout<<arr[i]<<" "; }
    
}

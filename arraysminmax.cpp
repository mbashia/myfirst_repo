#include<iostream>
using namespace std;
int getmax(int array[], int size){
    int max = array[0],i;
    
    for ( i = 1; i < size;i++){
        if(array[i]>max)
            max = array[i];
       
    }
     return max;
}
int getmin(int array[], int size){
    int min = array[0],i;
    
    for ( i = 1; i < size;i++){
        if(array[i]<min)
            min = array[i];
       
    }
     return min;
}
int main() {
    int size,i;
    cout<<"enter size of array:";
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size;i++){
        cout << "enter number:";
        cin >> array[i];

    }
     for (int i = 0; i < size;i++){
         cout << array[i] << " ";
        
     }
      cout << endl;
     cout << "highest number of the array is:" << getmax(array, size)<<endl;
     cout << "lowest number of the array is:" << getmin(array, size);
    }
    

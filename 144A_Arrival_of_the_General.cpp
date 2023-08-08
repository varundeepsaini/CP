#include <iostream>
 
using namespace std;
 
int maxOfArray(int arr[],int size){
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if (arr[i]>=max){
            max = arr[i];
        }
    }
    return max;
}
 
void deleteElementFromArray(int arr[], int size,int index){
    for (int i = index; i <= size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
 
int minOfArray(int arr[0], int size){
    int min = arr[0];
    for(int i = 0; i< size; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
 
}
 
int addElementToStartOfArray(int arr[],int size, int arr2[], int num){
    arr2[0] = num;
    for(int i = 0,j = 1;i < size; ++i, j++){
        arr2[j] = arr[i];
    }
}
 
int nearestMinIndex(int arr[],int size, int min){
    for(int i = size - 1; i>0; i--){
        if (arr[i]==min){
            return i;
        }
    }
    return -1;
}
 
int nearestMaxIndex(int arr[], int size, int max){
    for (int i = 0;i < size;i++){
        if (arr[i]==max){
            return i;
        }
    }
    return -1;
}
 
int swapSoldiers(int arr[],int size){
    int max = maxOfArray(arr, size);
    int min = minOfArray(arr, size);
    int max_index = nearestMaxIndex(arr,size, max);
    int swapCount = 0;
    int newarr[101];
    swapCount += max_index;
    deleteElementFromArray(arr, size, max_index);
    addElementToStartOfArray(arr,size,newarr, max);
 
    int min_index = nearestMinIndex(newarr,size,min);
    swapCount+= size-min_index;
    return swapCount - 1;
}
 
int main() {
        int size;
        cin >> size;
        int arr[100];
        for (int i = 0;i<size;++i){
            cin >> arr[i];
        }
        cout << swapSoldiers(arr,size);
 
    }

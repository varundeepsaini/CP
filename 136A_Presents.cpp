    #include "iostream"
    using namespace std;
     
    int findIndex(int arr[], int size, int num){
        for(int i = 0; i < size; ++i){
            if (arr[i]==num){
                return i+1;
            }
        }
        return -1;
    }
     
    void printArray(int arr[], int size){
        for(int i = 0; i < size-1; ++i){
            cout << arr[i] << " ";
        }
        cout << arr[size - 1];
    }
     
    void solve(int arr[], int size){
        int arr2[100];
        for(int i = 0;i < size; ++i){
            arr2[i] = findIndex(arr,size,i+1);
        }
        printArray(arr2,size);
    }
     
    int main(){
        int size;
        cin >> size;
        int arr[100];
        for(int i = 0; i<size;i++){
            cin >> arr[i];
        }
        solve(arr,size);
    }

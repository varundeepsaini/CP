    #include<iostream>
    using namespace std;
     
    void printSnakePattern(int length, int breadth){
        bool right = true;
     
        for(int i = 0; i < length; i++){
            if (i%2 == 0){
                for (int l = 0; l < breadth; l++){
                    cout << "#";
                }
                cout << endl;
            } else{
                if (right){
                    for (int j = breadth - 1; j > 0; j--){
                        cout << ".";
                    }
                    cout << "#";
                    cout << endl;
                    right = false;
                } else{
                    cout << "#";
                    for (int k = breadth - 1; k > 0; k--){
                        cout << ".";
                    }
                    cout << endl;
                    right = true;
                }
            }
        }
     
     
    }
     
    using namespace std;
     
    int main(){
        int length,breadth;
        cin >> length >> breadth ;
     
        printSnakePattern(length,breadth);
    }

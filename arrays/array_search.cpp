#include<iostream>
using namespace std;


int linear_search_custom(int arr[], int key){
    for(int i=0; i<7; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;

}

int main(){
    int array[7] = {1, 2, 3, 4, 5, 6, 18};
    int key;
    cin >> key;
    int value;
    value = linear_search_custom(array, key);
    if (value >= 0)
        cout << "the found index is " << value << endl;
    else
        cout << "not present in there" << endl;
   
    return 0;
}
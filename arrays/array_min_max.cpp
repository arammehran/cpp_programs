#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    int max_num = INT16_MIN, min_num = INT16_MAX;

    for (int i = 0; i < n; i++){
        max_num = max(max_num, array[i]);
        min_num = min(min_num, array[i]);
    } 
    cout << "the max is " << max_num << endl;
    cout << "the min is " << min_num << endl;

   
    return 0;
}
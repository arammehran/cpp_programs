#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1, 3, 5};
    array<int, 4> a = {1, 2, 3, 5};
    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at index 2 is " << a.at(2) << endl;
    cout << "First element is " << a.front() << endl;
    cout << "Last element is " << a.back() << endl;
    
    


    return 0;

}
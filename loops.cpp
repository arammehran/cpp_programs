#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    do
    {
        cout << "the number you entered " << n <<endl;
        cin >> n;
    } while (n>0);

    return 0;
}

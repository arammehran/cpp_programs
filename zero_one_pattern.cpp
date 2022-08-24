#include<iostream>
using namespace std;

int main(){
    int n, flag;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2 == 0){
            flag=0;
        }
        else{
            flag=1;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << flag <<" ";
            if(flag==0){
                flag=1;
            }
            else{
                flag=0;
            }
        }
        cout<<endl;
    }
    
    return 0;
}
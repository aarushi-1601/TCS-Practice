#include<iostream>
using namespace std;
int main()
{
    int N = 10, k;
    cout<<"enter the number of candies to be sold: "<<endl;
    cin >> k;
    
    if(k == 0)
    {
        cout << "INVALID INPUT" << endl;
        cout << "NUMBER OF CANDIES AVAILABLE: "<< N;
    }
    else
    {
        cout << "NUMBER OF CANDIES SOLD: " << k <<endl;
        cout << "NUMBER OF CANDIES AVAILABLE: "<< N-k;
    }       
}
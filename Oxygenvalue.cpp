#include <iostream>
#include <cmath>
using namespace std;

int main(){
int i, x, T1=0, T2=0, T3=0, count=1;
double A1, A2, A3;
while(count<=9){

    cin>>x;
    if (x>=1 && x<=100){
        
        if (count%3==1){
            T1 = T1+x;
        }
        else if (count%3==2){
            T2 = T2+x;
        }
        else{
            T3 = T3+x;
        }
    }

}
}
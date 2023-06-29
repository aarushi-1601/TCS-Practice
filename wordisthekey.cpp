#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string[16][10] = {"break", "case", "continue", "defalut", "defer", "else", "for", "function", "goto", "if", "map", "range", "return", 
    "struct", "type", "var"};
    char input[20];
    int flag = 0;
    cout<<"Enter the keyword:"<<endl;
    cin >> input;
    for(int i=0; i<16; i++){
        if(strcmp(input,string[i])==0){     
            flag=1;
            break;
        }
    }
       if(flag==1){
        cout << input << " is a keyword";
    }
    else{
        cout << input << " is not a keyword";
    }
    return 0;
}
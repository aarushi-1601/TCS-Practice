#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter high(n) and low(m) value:"<<endl;
    cin >> n >> m;
    for(int i=m; i<=n; i++){
        if (m >=100)
              printf("%03d", i);
        else if (m >=10)
              printf("%02d", i);
        else
              printf("%d", i);

    }
    return 0;
}
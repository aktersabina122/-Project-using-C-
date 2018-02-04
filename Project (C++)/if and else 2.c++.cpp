#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<=100 && n>=50){
        n=n+10;
        cout<<n<<endl;
    }

    else if(n==50||n>=30) {
        n=n+20;
        cout<<n;
    }

    return 0;
}

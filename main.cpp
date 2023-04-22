#include <iostream>
using namespace std;

int main(){

    int n, x1=1, x2=0, x3;

    cin >> n;

    if(n>=2){
        for(int i=1; i<=n; i++){

            x3 = x1 + x2;
            cout << x3 << endl;
            x1 = x2;
            x2 = x3;
        }
    }else
        cout << "errore";


    return 0;
}

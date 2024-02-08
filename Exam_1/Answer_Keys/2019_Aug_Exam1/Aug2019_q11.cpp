#include <iostream>
using namespace std;

int main() {
    int n = 7;

    //print top part
    for (int i = 1; i <= (2 * n) - 1; i++)
        cout<<"*";
    cout<<endl;

    //print upside down triangle
    for (int i = 1; i <= n - 1; i++) {
        //print first spaces
        for (int j = 1; j <= i; j++)
            cout<<" ";
        
        //print *
        if (i != (n - 1)) 
            cout<<"*";

        //print center spaces
        for (int j = 1; j <= (2 * n - 1) - (2 + 2 * i); j++)
            cout<<" ";
        
        //print *
        cout<<"*"<<endl;
    }

    return 0;
}

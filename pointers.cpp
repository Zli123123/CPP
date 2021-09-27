#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j;
    cout <<&i<<endl;
    cout <<&j<<endl;

    int *pointer = &i;
    cout << pointer <<endl;
    cout << *pointer <<endl;
    int k = 1, b = 2;
    cout << (k > b ? k:b) << "is greater" <<endl;
}
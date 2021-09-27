#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout << "enter a number: " <<endl;
    cin >> x;
    int count = 1;
    while(pow(count, 2) <= x){
        count ++;
    }
    cout << count-1 <<" is the max length of the square." <<endl;
}
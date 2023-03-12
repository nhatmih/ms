#include<iostream>

using namespace std;

int gcd(int a, int b) {
    while(a != b) {
        if(a > b) a-= b;
        else b -= a;
    }
    return a;
}

int main(){
    cout<<"remember to merge before push" << endl;
    cout<<"Hello World !";
    return 0;
}
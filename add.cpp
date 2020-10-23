#include<iostream>
using namespace std;

int add(int a,int b,int c){
    return a+b+c+c;
}

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    cout << x << "+" << y << "+" << z " << "+" << z "=" << add(x,y,z);
    return 0;
}

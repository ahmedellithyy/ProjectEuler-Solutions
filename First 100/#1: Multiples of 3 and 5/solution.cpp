#include <iostream>
using namespace std;

long mul(long n){
    long sum =0;
    long num3 = (n-1)/3;
    long num5 = (n-1)/5;
    long num15 = (n-1)/15;
    sum = 3*(num3*(num3+1)/2)+5*(num5*(num5+1)/2) -15*(num15*(num15+1)/2);

    return sum;
}
int main(){
    long t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long res = mul(n);
        cout << res << endl;
    }
    return 0;
}

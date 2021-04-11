#include <iostream>
using namespace std;
int main() {
    int i, x, sum, n, a, b;
   
    cin >> a;
   
    cin >> b;
  
    for (i =a; i <= b; i++) {
        n=i;
        sum = 0;
        while (n>0) {
            x= n % 10;
            n = n / 10;
            sum = sum * 10 + x;
        }
        if (n == sum)
            cout << n << endl;
    }
   
}
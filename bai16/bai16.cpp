


#include <iostream>
#include <math.h>
using namespace std;

int a, b,z;

int main() {
    cin >> a >> b;

    for (int z = a; z <= b; z++)
    {

        if (z >= 2) {


            int count = 0;
            for (int i = 2; i <= sqrt(z); i++) {
                if (z % i == 0) {
                    count++;
                }
            }
            if (count == 0) {
                cout << z << " la so nguyen to\n";
            }
            
        }
    }
    

}
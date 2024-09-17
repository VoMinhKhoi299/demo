#include <iostream>

using namespace std;


int main() {
    int n;
    int sum = 0;
    int res = 10;
    cin>>n;
    int a[n];
    for (int i=1;i<=n;i++) {
        if (i<10) {
            a[i] = i*(11);
        }
        if (i<100 && i >=10){
            a[i] = i*(101);
        }
        if (i<1000 && i>=100) {
            a[i] = i*(1001);
        }
        if (i>=1000 && i<1500) {
            a[i] = i*(10001);
        }
    }


    for (int i=1;i<=n;i++) {
        sum += a[i];
    }
    cout<<sum;
    return 0;
}
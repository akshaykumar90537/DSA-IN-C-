#include <iostream>
using namespace std;

bool isFibo(int num) {
    int t1 = 0, t2 = 1, nextTerm;

    

    if(num == 0 || num == 1) return true;

    while (t2 <= num) {

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (t2 == num) return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++){

        if(!isFibo(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}
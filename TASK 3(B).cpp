#include<iostream>

using namespace std;

int main(){
    int n, num = 0, i, j, flag;
    cin >> n;
     for (i = 1; i <= n; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
 
        
        if (flag == 1)
            num++;
    }
    cout << (num * (num + 1)) / 2 << endl;
}
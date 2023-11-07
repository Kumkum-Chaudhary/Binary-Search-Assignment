// 6 -> number of complete rows of staircase
#include <iostream>
using namespace std;
int arrangeCoins(int n){
    long left = 0;
    long right = n;
    while (left <= right){
        long mid = left + (right - left) / 2;
        long total = mid * (mid + 1) / 2;
        if (total == n) {
            return mid;
        } else if (total < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right;  // When the loop ends, 'right' will contain the maximum complete rows
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout << arrangeCoins(n) << endl;  
    return 0;
}

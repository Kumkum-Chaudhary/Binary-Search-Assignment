// 4 -> return repeated number
#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(const vector<int>& nums) {
    int lo = 1;
    int hi = nums.size() - 1;

    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int count = 0;

        for (int num : nums) {
            if (num <= mid) {
                count++;
            }
        }

        if (count > mid) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }

    return lo;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> arr(n);

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int repeatedNumber = findDuplicate(arr);

    cout << "The repeated number is: " << repeatedNumber << endl;

    return 0;
}

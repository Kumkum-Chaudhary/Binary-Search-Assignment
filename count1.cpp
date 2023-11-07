// 2 -> maximum number of 1's
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int lo = 0;
    int hi = n - 1;
    int count = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == 1)
        {
            if(mid == 0) {
                count = 1;
                break;
            } 
            else if (arr[mid - 1] == 0)
            {
                count = n - mid;
                break;
            }
            else
            {
                hi = mid - 1;
            }
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << count;
}
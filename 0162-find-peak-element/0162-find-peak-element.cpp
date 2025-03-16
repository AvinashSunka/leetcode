class Solution {
private:
    bool isPeakElement(vector<int>& arr, int n, int middle) {
        int left, right;
        if (middle > 0 && middle < (n - 1)) {
            left = arr[middle - 1];
            right = arr[middle + 1];
            return left < arr[middle] && arr[middle] > right;
        } else if (middle == 0) {
            right = arr[middle + 1];
            return arr[middle] > right;
        } else {
            left = arr[middle - 1];
            return left < arr[middle];
        }
    }

public:
    int findPeakElement(vector<int>& arr) {
        int n = arr.size();
        int left = 0, right = n - 1, middle;

        if (n == 1)
            return 0;
        else if (n == 2)
            return arr[0] > arr[1] ? 0 : 1;
        else {
            while (left <= right) {
                middle = left + (right - left) / 2;

                if (isPeakElement(arr, n, middle))
                    return middle;

                if (middle < n - 1 && arr[middle] < arr[middle + 1]) {
                    left = middle + 1;  // Move right
                } else {
                    right = middle - 1; // Move left
                }
            }
        }
        return -1;
    }
};

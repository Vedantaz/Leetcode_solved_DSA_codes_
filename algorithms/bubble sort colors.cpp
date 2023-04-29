class Solution {
public:
    void sortColors(vector<int>& arr) {
        // use it by bubblle sort
        int n = arr.size();
        bool swapped = true;
        int start = 0, end = n-1;

        while (swapped) {
            swapped = false;

            // sort from left to right
            for (int i = start; i < end; i++) {
                if (arr[i] > arr[i+1]) {
                    // swap arr[i] and arr[i+1]
                    swap(arr[i], arr[i+1]);
                    // int temp = arr[i];
                    // arr[i] = arr[i+1];
                    // arr[i+1] = temp;
                    swapped = true;
                }
            }
            if (!swapped) {
                break;
            }

            swapped = false;

            // sort from right to left
            for (int i = end-1; i >= start; i--) {
                if (arr[i] > arr[i+1]) {
                    // swap arr[i] and arr[i+1]
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                    swapped = true;
                }
            }
            start++;
            end--;
        }
    }
};
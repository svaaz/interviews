max_subarray find_max_crossing_subarray(int A[], unsigned low, unsigned mid, unsigned high) {
    max_subarray result = {-1, -1, 0};
    int sum = 0,
        left_sum = INT_MIN,
        right_sum = INT_MIN;

    for (int i = mid - 1; i >= (int) low; i--) {
        sum += A[i];
        if (sum > left_sum) {
            left_sum = sum;
            result.left = i;
        }
    }

    sum = 0;

    for (int j = mid; j < high; j++) {
        sum += A[j];
        if (sum > right_sum) {
            right_sum = sum;
            result.right = j + 1;
        }
    }

    result.sum = left_sum + right_sum;
    return result;
}

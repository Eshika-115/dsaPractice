class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;//k = 14 % 5 = (4 + 5) = 9 % 5 = 4
        k = ((k % n) + n) % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
    /*
                    ei
    arr -> [50, 40, 30, 20, 10]
    idx ->  0    1   2   3   4
                     si
    si = 2,
    ei = 2              
    */
    public void reverse(int[] arr, int si, int ei) {
        while(si <= ei) {
            swap(arr, si, ei);
            si++;
            ei--;
        }
    }
    public void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
} 
/*
[30, 40, 50, 10, 20] => k = -2
[20, 30, 40, 50, 10] => k = -1
[10, 20, 30, 40, 50] => k = 0
[50, 10, 20, 30, 40] => k = 1
[40, 50, 10, 20, 30] => k = 2
[30, 40, 50, 10, 20] => k = 3
[20, 30, 40, 50, 10] => k = 4
[10, 20, 30, 40, 50] => k = 5
[50, 10, 20, 30, 40] => k = 6
[40, 50, 10, 20, 30] => k = 7
[30, 40, 50, 10, 20] => k = 8
 
K = -5, 0, 5, 10, 15
K = -4, 1, 6, 11, 16
K = -3, 2, 7, 12, 17
 
*/

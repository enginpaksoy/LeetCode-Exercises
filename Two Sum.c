/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) { 
    int*arr = malloc(2 * sizeof(int));
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 0; i < numsSize; i++){
        for(int j = 0; j < numsSize && j != i; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

/******************************************************************************

Welcome to code of Lập trình - Điện tử
Series: DSA
Author: Nghĩa Taarabt

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

typedef struct {
    int key;
    int val;
} Node, *pNode_t;

typedef struct {
    int capacity;
    pNode_t hash_arr;
} Hash, *pHash_t;

pHash_t create_hashmap(int capacity) {
    pHash_t hash = (pHash_t)malloc(sizeof(Hash));
    if(hash) {
        hash->capacity = capacity;
        hash->hash_arr = (pNode_t)malloc(capacity * sizeof(pNode_t));
        int i;
        for(i = 0; i < capacity; i++) {
            hash->hash_arr[i].key = -1;
            hash->hash_arr[i].val = -1;
        }
    }

    return hash;
}

unsigned int hash_idx(pHash_t hash, int key) {
    return (((key % hash->capacity) + hash->capacity) % hash->capacity);
}

int get_map(pHash_t hash, int key) {
    int idx = hash_idx(hash, key);

  printf(" -- %d %d -- ", key, idx);

    while(hash->hash_arr[idx].val != -1) {
        if(hash->hash_arr[idx].key == key) {
            return hash->hash_arr[idx].val;
        }
        idx = (idx + 1) % hash->capacity;
    }

    return -1;
}

void put_map(pHash_t hash, int key, int val) {
    int idx = hash_idx(hash, key);

    while(hash->hash_arr[idx].val != -1) {
        idx = (idx + 1) % hash->capacity;
    }

    hash->hash_arr[idx].key = key;
    hash->hash_arr[idx].val = val;
}

void free_map(pHash_t hash) {
    free(hash->hash_arr);
    free(hash);
} 

// Main function for two-sum problem
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = (int *)calloc(2, sizeof(int));
    pHash_t hash = create_hashmap((2 * numsSize) + 1);
    int i;
    int complement;
    int complement_idx;
    *returnSize = 0;

    for(i = 0; i < numsSize; i++) {
        complement = target - nums[i];
        complement_idx = get_map(hash, complement);
        if(complement_idx != -1) {
            res[0] = complement_idx;
            res[1] = i;
            *returnSize = 2;
            free_map(hash);
            break;
        }

        put_map(hash, nums[i], i);
    }

    return res;
}

void main()
{
  int nums[] = {2,44,11,11,3,5,6,7,8,4};
  int target = 6, size = 2;

  int * out = twoSum(nums, sizeof(nums)/sizeof(nums[0]), target, &size);

  printf(" %d %d ", out[0], out[1]);
}

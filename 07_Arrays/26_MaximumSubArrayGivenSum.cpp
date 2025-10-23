#include <bits/stdc++.h>
using namespace std;

int maximumSubArrayWithGinumsenSum(vector<int>& nums, int k) {
  int numOfSumArray = 0;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i; j < nums.size(); j++) {
      int currentSum = 0;
      for (int l = i; l <= j; l++) {
        currentSum += nums[l];
      }
      if (currentSum == k) {
        numOfSumArray++;
      }
    }
  }
  return numOfSumArray;
}
// Brute Force
int maximumSubArrayWithGinumsenSumBetter(vector<int>& nums, int k) {
  int numOfSumArray = 0;
  for (int i = 0; i < nums.size(); i++) {
    int currentSum = 0;
    for (int j = i; j < nums.size(); j++) {
      currentSum += nums[j];
      if (currentSum == k) {
        numOfSumArray++;
        break;
      }
    }
  }
  return numOfSumArray;
}
// Better

int maximumSubArrayWithGivenSumOptimal(vector<int>& nums, int k) {
  int prefixSum = 0;
  int count = 0;
  map<int, int> hashMap;
  hashMap[0] = 1;
  for (int i = 0; i < nums.size(); i++) {
    prefixSum += nums[i];
    int remove = prefixSum - k;
    count += hashMap[remove];
    hashMap[prefixSum] += 1;
  }
  return count;
}
// Optimal
int main() {
  vector<int> nums = {1, 2, 1, 2, 1};
  int sum = 3;
  int maxLength = maximumSubArrayWithGivenSumOptimal(nums, sum);
  cout << maxLength;
  return 0;
}
#include <vector>

int sum(std::vector<int> nums) {
  int x = 0;
  for(unsigned long i = 0; i < nums.size(); i++){
    x += nums[i];
  }
  return x;
}

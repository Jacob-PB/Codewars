#include <vector>
int grow(std::vector<int> nums) {
  
  int vec = 1;
  for(unsigned long i = 0; i < nums.size(); i++){
   vec *= nums[i];
    
  }
  return vec;
}

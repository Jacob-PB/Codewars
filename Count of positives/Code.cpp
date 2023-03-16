#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
  int count = 0;
  int sum = 0;
    for(int i = 0; i < (input.size()); i++){
      if(input[i] > 0)
        count++;
      else if(input[i] < 0)
        sum += input[i];
    }
  if((count > 0) || (sum < 0))
    return {count, sum};
  
  else
    return {};
}

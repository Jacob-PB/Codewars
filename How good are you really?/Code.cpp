#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int sumClass = 0;
  for(int i(classPoints.size()); i > 0; i--){
    sumClass += classPoints[i-1];
  }
  double avg = sumClass / classPoints.size();
  if(avg < yourPoints)
    return bool (1);
  else
    return bool (0);
}

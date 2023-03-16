int centuryFromYear(int year) 
{
 int centuryCount = 0;
  while (year > 0){
    year = year - 100;
   centuryCount += 1;
  }
  return centuryCount;
}   

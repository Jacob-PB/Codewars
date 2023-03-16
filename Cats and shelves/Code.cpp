unsigned int Cats(unsigned int start, unsigned int finish) {
  int jump = 0;
  
    for(unsigned int i = start; i < finish; i+=3){
     jump++;
      if(finish - i == 2)
        jump++;
  }
 
  return jump;
}

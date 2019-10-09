unsigned long hwkTwoC(unsigned long x, int n) {
  //mask 0xFFFFFFFF since it's 32 bit
  long int bitu = (x >> 32) &0xFFFFFFFF; //shift right 32
  long int bitl = x &0xFFFFFFFF; //keeping the lower bit the same
  //since we are dealing with 32 bit we do 32 - n times to get
  long int rot = (((bitu << n) | (bitu >> (32 - n))) &0xFFFFFFFF);
  //shift rot left 32 then or bit lower to get the result
  long int result = (rot << 32) | bitl;

  return result;
}

// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
 for (i = 2; i * i <= value; i++) {
  if (value % i == 0){
   return false;
  }
 }
   return true;
}
uint64_t nPrime(uint64_t n) {
 int i = 0;
 do {
  i++;
   if (checkPrime(i)) {
    num++;
   }
 } while( num < n );
 return i;
}
uint64_t nextPrime(uint64_t value) {
 int count = 0;
  while (count < 10) {
 if ( checkPrime(value + 1) == True) {
  count = 11;
  return value + 1;
 }
   value += 1;
  }
}
uint64_t sumPrime(uint64_t hbound) {
 for (int i == 2; i < hbound; i++) {
  if checkPrime(i) == True) {
   summ += i;
  }
 }
 return summ;
}

// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int i = 2;
  for (i = 2; i * i <= value; i++) {
  if (value % i == 0) {
  return false;
  }
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  int num = 0;
  int i = 0;
  do {
  i++;
  if (checkPrime(i)) {
    num++;
  }
  } while ( num < n );
  return i;
}
uint64_t nextPrime(uint64_t value) {
  int count = 0;
  while (count < 10) {
  if (checkPrime(value + 1) == true) {
  count = 11;
  return value + 1;
  }
  value += 1;
  }
  return 0;
}
uint64_t sumPrime(uint64_t hbound) {
  int i = 2;
  int summ = 0;
  for (i == 2; i < hbound; i++) {
  if (checkPrime(i) == true) {
  summ += i;
  }
  }
  return summ;
}

#pragma once

#include "customer.h"
#include "movie.h"

class Transactions {
 public:
  Transactions(char transactionType, Customer *customerPtr, int mediaType,
               Movie *moviePtr);
  ~Transactions();

 protected:
  char transactionType;
  Customer *customerPtr;
  int mediaType;
  Movie *moviePtr;
};
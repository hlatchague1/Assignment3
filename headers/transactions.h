#pragma once

#include "customer.h"
#include "movie.h"

class Transactions {
 public:
  Transactions();
  Transactions(char transactionType, Customer *customerPtr, int mediaType,
               Movie *moviePtr);

 protected:
  char transactionType;
  Customer *customerPtr;
  int mediaType;
  Movie *moviePtr;
};
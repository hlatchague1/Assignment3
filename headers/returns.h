#pragma once
#include "customer.h"
#include "movie.h"

class Returns : public Transactions {
 public:
  Returns(char transactionType, Customer *customerPtr, int mediaType,
          Movie *moviePtr);
  ~Returns();
};

// me
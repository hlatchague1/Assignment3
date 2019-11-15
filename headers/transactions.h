#pragma once
#include "customer.h"
#include "movie.h"

class Transactions {
 public:
  Transactions();
  Transactions(char transactionType, Customer* customer, int mediaType,
               Movie* movie);

 protected:
  char transactionType;
  Customer* customer;
  int mediaType;
  Movie* movie;
};
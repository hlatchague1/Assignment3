#pragma once
#include "customer.h"
#include "movie.h"

class Returns : public Transactions {
public:
	Returns(char transactionType, Customer* customer, int mediaType, Movie* movie);
	~Returns();
};



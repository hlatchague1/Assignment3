#pragma once

#include "transactions.h"
#include "customer.h"
#include "movie.h"

class Borrows : public Transactions {
public:
	Borrows(char transactionType, Customer* customer, int mediaType, Movie* movie);
	~Borrows();
};
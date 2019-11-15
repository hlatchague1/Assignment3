#pragma once

class Transactions {
 protected:
};

class Borrow : public Transactions {};

class Return : public Transactions {};

// class Inventory : public Transactions {
//
//};
//
// class History : public Transactions {
//
//};

class TransactionFactory {
  // static Transactions* create(const string& transactionInitial) {
  //	if (transactionInitial == "B")
  //		return new Borrow();
  //	if (transactionInitial == "R")
  //		return new Return();
  //	return nullptr;
  //}
};
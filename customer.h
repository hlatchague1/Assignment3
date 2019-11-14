#pragma once

class Customer {
public:
	int GetID();
	string GetFirstName();
	string GetLastName();
	vector<Transactions> GetHistory();

	void SetID(int ID);
	void SetFirstName(int fName);
	void SetLastName(int lName);

	bool AddToHistory();

private:
	int customerID;
	string firstName;
	string lastName;
	vector<Transactions> history;
};
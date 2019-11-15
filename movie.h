#pragma once

#include <string>

using namespace std;

class Movie {
protected:
	string movieTitle;
	int stockAmount;
	string directorName;
	int releaseYear;
	string movieStatus;

public:
	string GetMovieTitle();
	int GetStockAmount();
	string GetDirectorName();
	int GetReleaseYear();
	string GetMovieStatus();

	void SetMovieTitle(string title);
	void SetStockAmount(int stock);
	void SetDirectorName(string director);
	void SetReleaseYear(int releaseYear);
	void SetMovieStatus(string status);

	bool AddToStock();
};


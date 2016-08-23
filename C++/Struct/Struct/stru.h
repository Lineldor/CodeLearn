#ifndef STRU_H
#define STRU_H
#include <iostream>
#include <string>

struct stru {
	std::string bookno;
	int items_sold;
	float sum_money;
	std::string isbn() { return bookno;}
	float avg_price();
};
    float stru::avg_price () {
		if (items_sold)
			return sum_money/items_sold;
		else 
			return 0;
	}
#endif
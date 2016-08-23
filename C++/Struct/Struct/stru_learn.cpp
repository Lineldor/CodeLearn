#include <iostream>
#include <string>
#include "stru.h"

int main(){
	stru str_test;
	std::cin>>str_test.bookno>>str_test.items_sold>>str_test.sum_money;
	std::cout<<str_test.isbn()<<std::endl<<str_test.avg_price()<<std::endl;
}

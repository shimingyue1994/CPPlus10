#pragma once
#ifndef  STOCK00_H_H
#define STOCK00_H_H
#include <string>
class Stock
{
	//私有部分
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() 
	{
		total_val = shares * share_val;
	}
	//公共部分
public:
	void acquire(const std::string& co, long n, double pr);
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	void show();
};
#endif // ! STOCK00_H_H




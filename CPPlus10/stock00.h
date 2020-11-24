#pragma once
#ifndef  STOCK00_H_H
#define STOCK00_H_H
#include <string>
/// <summary>
/// 这样就声明了一个类，但公有方法还没有实现
/// </summary>
class Stock
{
	//私有部分
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//一个内联函数，所有在类申明中定义的函数，也可以在类声明之外使用inline定义内联函数
	void set_tot() 
	{
		total_val = shares * share_val;
	}
	//公共部分
public:
	//先声明默认构造函数 请在cpp内定义这些函数
	Stock();
	Stock(const std::string&co,long n = 0,double pr = 0.0);
	//析构函数声明
	~Stock();
	void acquire(const std::string& co, long n, double pr);
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	//常量函数，不能使用此函数修改数据，但可以展示和返回数据
	void show() const;
	const Stock& topval(const Stock & s) const;
};
#endif // ! STOCK00_H_H


////类声明之外定义内敛函数
//inline void Stock::set_tot()
//{
//}
#include <iostream>
#include "stock00.h"

//下面“定义”类的函数实现


/// <summary>
/// 获取股票
/// </summary>
/// <param name="co"></param>
/// <param name="n"></param>
/// <param name="pr"></param>
void Stock::acquire(const std::string& co, long n, double pr)
{
	company = co;
	if (n < 0)
	{
		std::cout << "Number of shares can't be negative;"
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

/// <summary>
/// 购买股票
/// </summary>
/// <param name="num"></param>
/// <param name="price"></param>
void Stock::buy(long num, double price)
{
	if (num<0)
	{
		std::cout << "Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

/// <summary>
/// 卖出股票
/// </summary>
/// <param name="num"></param>
/// <param name="price"></param>
void Stock::sell(long num, double price)
{
	using std::cout;
	if (num<0)
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if (num>shares)
	{
		cout << "You can't sell mor than you have: "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}

}
/// <summary>
/// 更新价格
/// </summary>
/// <param name="price"></param>
void Stock::update(double price)
{
	share_val = price;
	set_tot();

}
/// <summary>
/// 
/// </summary>
void Stock::show()
{
	std::cout << "Company: " << company
		<< " Shares: " << shares << '\n'
		<< " Share Price: $" << share_val
		<< " Total Worth: $" << total_val << '\n';
}
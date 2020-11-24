#pragma once
#ifndef  STOCK00_H_H
#define STOCK00_H_H
#include <string>
/// <summary>
/// ������������һ���࣬�����з�����û��ʵ��
/// </summary>
class Stock
{
	//˽�в���
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//һ�������������������������ж���ĺ�����Ҳ������������֮��ʹ��inline������������
	void set_tot() 
	{
		total_val = shares * share_val;
	}
	//��������
public:
	//������Ĭ�Ϲ��캯�� ����cpp�ڶ�����Щ����
	Stock();
	Stock(const std::string&co,long n = 0,double pr = 0.0);
	//������������
	~Stock();
	void acquire(const std::string& co, long n, double pr);
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	//��������������ʹ�ô˺����޸����ݣ�������չʾ�ͷ�������
	void show() const;
	const Stock& topval(const Stock & s) const;
};
#endif // ! STOCK00_H_H


////������֮�ⶨ����������
//inline void Stock::set_tot()
//{
//}
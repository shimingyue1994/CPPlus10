#pragma once
#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
/// <summary>
/// 一个实现栈的类
/// </summary>
class Stack
{
private:
	//定义枚举常量 常量 常量！！！
	enum {	Max = 10	};
	Item items[Max];
	int top;
public:
	Stack();
	//常量函数，不可改变类成员变量
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
};
#endif // !STACK_H_




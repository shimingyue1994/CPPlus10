#pragma once
#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;
/// <summary>
/// һ��ʵ��ջ����
/// </summary>
class Stack
{
private:
	//����ö�ٳ��� ���� ����������
	enum {	Max = 10	};
	Item items[Max];
	int top;
public:
	Stack();
	//�������������ɸı����Ա����
	bool isempty() const;
	bool isfull() const;
	bool push(const Item& item);
	bool pop(Item& item);
};
#endif // !STACK_H_




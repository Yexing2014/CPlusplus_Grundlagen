// Author: Yexing Geng
// Übung 1.25

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; 

	if (std::cin >> total)
	{
		Sales_item trans;

		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn()) // 如果是相同的ISBN号则继续储存
				total += trans;
			else
			{
				std::cout << "ISBN: x-xxx-xxxxx-x, Anzahl: A , Gesamt Preis: GP, Einzel Preis: EP " <<std::endl; // 不相同则先打印，再更新新的total（total被存储书号）
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << "ISBN: Anzahl: A, Gesamt Preis: GP, Einzel Preis: EP " << std::endl; // 结束则打印所有的书号
		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "No data?!" << std::endl; // 无输入则报错
		return -1;
	}
	return 0;
}
#include<iostream>
#include "NumberList.h"

int main()
{
	NumberList list;
	list.Init();
int x;
	while (true) {
		std::cin >> x;
		if (!list.Add(x))
		{
			std::cout << "Full"<<'\n';
			break;
		}
	}
	list.Sort();
	std::cout << "lista sortata: ";
	list.Print();
	return 0;
}
#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	if(a%2==1 || b%2==1)
	{
		std::cout << "YES";
	}
	return 0;
}
#include "head.h"

//增量编译可以提高编译效率
int main()
{
	int ret;
	ret = print_star(10);//10为实参,实参可以是常量,变量,表达式
	
	print_message();

	printf("%d\n", ret);

	system("pause");
}


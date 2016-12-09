#include "ArrayCompositor.h"
#include <iostream>
ArrayCompositor::ArrayCompositor()
{
	std::cout << "Construct ArrayCompositor!" << std::endl;
}


ArrayCompositor::~ArrayCompositor()
{
	std::cout << "Delete ArrayCompositor!" << std::endl;

}

int ArrayCompositor::Compose(int componentCount, int lineWidth, int lineCount)
{
	std::cout << "conponentCount:" << componentCount + 30 << std::endl
		<< "lineWidth:" << lineWidth + 30 << std::endl
		<< "lineCount:" << lineCount + 30 << std::endl;
	return componentCount + lineCount + lineCount + 90;

}
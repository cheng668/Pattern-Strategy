#include "SimpleCompositor.h"
#include <iostream>

SimpleCompositor::SimpleCompositor()
{
	std::cout << "Construct Simple!" << std::endl;
}


SimpleCompositor::~SimpleCompositor()
{
	std::cout << "Delete Simple!" << std::endl;

}

int SimpleCompositor::Compose(int componentCount, int lineWidth, int lineCount)
{
	std::cout << "conponentCount:" << componentCount + 10 << std::endl
		<< "lineWidth:" << lineWidth + 10 << std::endl
		<< "lineCount:" << lineCount + 10 << std::endl;
	return componentCount + lineCount + lineCount + 30;

}
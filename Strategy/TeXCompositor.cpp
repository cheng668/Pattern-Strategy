#include "TeXCompositor.h"
#include <iostream>

TeXCompositor::TeXCompositor()
{
	std::cout << "Construct TeXCompositor!" << std::endl;
}


TeXCompositor::~TeXCompositor()
{
	std::cout << "Delete TeXCompositor!" << std::endl;

}

int TeXCompositor::Compose(int componentCount, int lineWidth, int lineCount)
{
	std::cout << "conponentCount:" << componentCount + 20 << std::endl
		<< "lineWidth:" << lineWidth + 20 << std::endl
		<< "lineCount:" << lineCount + 20 << std::endl;
	return componentCount + lineCount + lineCount + 60;
}
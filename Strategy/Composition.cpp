#include "Composition.h"
#include "Compositor.h"
#include <iostream>
Composition::Composition(Compositor* compositor) :
_compositor(compositor), _lineCount(0), _componentCount(0), _lineWidth(0)
{
	std::cout << "Construct composition!" << std::endl;
}


Composition::~Composition()
{
	if (_compositor)
	{
		delete _compositor;
	}
	std::cout << "delete composition" << std::endl;

}

void Composition::Repair()
{
	int breakCount;
	breakCount = _compositor->Compose(_componentCount, _lineWidth, _lineCount);
	std::cout << " Composition breakCount:" << breakCount << std::endl;
}
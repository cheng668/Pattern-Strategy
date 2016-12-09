#pragma once
#include "Compositor.h"
class ArrayCompositor : public Compositor
{
public:
	ArrayCompositor();
	virtual ~ArrayCompositor();
	virtual int Compose(int componentCount, int lineWidth, int lineCount) override;
};


#pragma once
#include "Compositor.h"
class SimpleCompositor : public Compositor
{
public:
	SimpleCompositor();
	virtual ~SimpleCompositor();
	virtual int Compose(int componentCount, int lineWidthnint, int lineCount) override;
};


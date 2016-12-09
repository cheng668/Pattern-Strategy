#pragma once
#include "Compositor.h"
class TeXCompositor : public Compositor
{
public:
	TeXCompositor();
	virtual ~TeXCompositor();
	virtual int Compose(int componentCount, int lineWidth, int lineCount) override;
};


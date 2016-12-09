#pragma once
class Compositor
{
public:
	virtual ~Compositor();

	virtual int Compose(int componentCount,int lineWidth ,int lineCount) = 0;
protected:
	Compositor();

};


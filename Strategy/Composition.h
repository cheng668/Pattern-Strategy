#pragma once
#pragma  once
class Compositor;
class Composition
{
public:
	Composition(Compositor*);
	void Repair();
	~Composition();
private:
	Compositor* _compositor;
	//Component* _Components;   //the list of components
	int _componentCount;	   //the number of components
	int _lineWidth;			   //the Composition's line width
	//int* _lineBreaks;		   //the position of linebreaks in components
	int _lineCount;			   //the number of lines
};


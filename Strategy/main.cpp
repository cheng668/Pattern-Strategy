#pragma once
#include "ArrayCompositor.h"
#include "Composition.h"
#include "SimpleCompositor.h"
#include "TeXCompositor.h"
#include "iostream"

int main()
{
	Composition* quick = new Composition(new SimpleCompositor);
	Composition* slick = new Composition(new TeXCompositor);
	Composition* iconic = new Composition(new ArrayCompositor);

	quick->Repair();
	slick->Repair();
	iconic->Repair();

	delete quick;
	delete slick;
	delete iconic;

	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}

/*
output:
	Construct compositor!
	Construct Simple!
	Construct composition!
	Construct compositor!
	Construct TeXCompositor!
	Construct composition!
	Construct compositor!
	Construct ArrayCompositor!
	Construct composition!
	conponentCount:10
	lineWidth:10
	lineCount:10
	Composition breakCount:30
	conponentCount:20
	lineWidth:20
	lineCount:20
	Composition breakCount:60
	conponentCount:30
	lineWidth:30
	lineCount:30
	Composition breakCount:90
	Delete Simple!
	delete compositor
	delete composition
	Delete TeXCompositor!
	delete compositor
	delete composition
	Delete ArrayCompositor!
	delete compositor
	delete composition
*/
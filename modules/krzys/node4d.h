#pragma once

#include "core/object/ref_counted.h"
#include "scene/main/node.h"

#include "core/math/geometry_2d.h"

class Node4D : public Node {
	GDCLASS(Node4D, Node);

protected:
	static void _bind_methods();

public:
	Node4D();
    //Vector<Vector<Point2>> jo();
	void jo();
	void _ready();
	void fati(const String text);

	Geometry2D *geo;
};

/*

	Class Counted

*/

class Counted : public RefCounted {
	GDCLASS(Counted, RefCounted);

protected:
	static void _bind_methods();

public:
	Counted();
    void licznik();
};
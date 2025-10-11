#include "node_4d.h"
#include "core/object/class_db.h"

#include "core/math/geometry_2d.h"
#include "core/os/os.h"

#include "scene/2d/polygon_2d.h"

void Node4D::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("jo"), &Node4D::jo);
}

Node4D::Node4D()
{

}

void Node4D::_ready()
{
    //Vector<Point2> a = {Vector2(0, 0), Vector2(0, 100), Vector2(100, 0), Vector2(100, 100) };
    //geo = memnew(Geometry2D);
    //auto b= geo->merge_polygons(a, a);
    //Vector<Vector<Point2>> c = Geometry2D::merge_polygons(a, a);
    //print_line_rich(b[0]);
    //print_line_rich(c[0]);
    //OS *os = OS::get_singleton();
    //os->print(b);
    //Polygon2D *poly = memnew(Polygon2D);
    //poly->set_polygons(b[0][0]);
    //add_child(poly);
}

//Vector<Vector<Point2>> Node4D::jo()
void Node4D::jo()
{
    //Vector<Vector<Point2>> p;
    //p.append(Vector<Point2>({Point2(0, 0)}));
    //return p;
}

void Counted::_bind_methods()
{
    ClassDB::bind_method(D_METHOD("licznik"), &Counted::licznik);
}

Counted::Counted()
{

}

void Counted::licznik()
{

}
#include <Simple_window.h>

using namespace Graph_lib;
int main()
{
    Simple_window win(Point(100,100), 1000, 600, "Binary_tree");
    Graph_lib::Circle c(Point(200,200),50);
    c.set_color(Color::red);
    c.set_fill_color(Color::blue);
    Graph_lib::Ellipse e(Point(100,100),50,30);
    e.set_color(Color::blue);
    e.set_fill_color(Color::red);
    Graph_lib::Rectangle r(Point(250,200),Point(350,300));
    r.set_color(Color::green);
    r.set_fill_color(Color::red);
    win.attach(r);
    win.attach(e);
    win.attach(c);
    win.wait_for_button();
}
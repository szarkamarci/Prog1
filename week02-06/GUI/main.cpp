/*

    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"

double one(double) { return 1; }

double square(double x) { return x*x; }

int main()
{
    using namespace Graph_lib;

    int max_width = 600;
    int max_height = 400;

   Simple_window win{Point{100,100},
   			max_width, max_height, "Graphics classes"};

   	Line l(Point{200,200}, Point{300,300});

   	Lines lines ={
   		{100,100},{200,100},{150,50}, {150,150}
   	};
   	
   	win.attach(lines);		

    win.wait_for_button();

}
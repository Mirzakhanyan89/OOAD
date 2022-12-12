/* simulat_picture.cpp
**/
#include <iostream>
class Sun
{
private:	
	bool m_light;
public:
	Sun () {};
	Sun (bool light) {};
	void set_val (bool light)  { m_light = light; };
	bool get_val () const { return m_light; };
};

class Tree
{
public:
	bool photosintesis (Sun & ob) { return ob.get_val(); };
};

class Frog
{
public:
	bool is_sleap (Sun & ob) { return ! ob.get_val(); };
	bool is_eat (Sun & ob) { return ob.get_val(); };
};

class Grass {};

int main ()
{
	Sun sun;
        Sun sun2 { false };
	Frog frog;
	std::cout<< std::boolalpha << "Is frog sleap? " 
		 <<  frog.is_sleap (sun2);			//it will print true
	std::cout<< std::boolalpha << "\nIs frog eat? " 
		 <<  frog.is_eat (sun2);			// it will print false
	Tree tree;
	std::cout<< std::boolalpha << "\nDoes the tree photosintesize? " 
		 << tree.photosintesis (sun2);		// it will print false
return 0;
}

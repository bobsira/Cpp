#include "Area.hpp"

void Area::setLength(int length){
  mlength = length;
}

int Area::getLength(){
  return mlength;
}

void Area::setWidth(int width){
  mwidth = width;
}

int Area::getWidth(){
  return mwidth;
}

int Area::returnArea(){
  return mlength * mwidth;
}

 // default constructor
 Area::Area(){
 }

 Area::Area(int length, int width){
   //rectangle
   mlength = length;
   mwidth = width;
 }

// destructor
Area::~Area(){
}

int main(int argc, char const *argv[]) {
  int length, width;
  std::cout << "Enter length!" << '\n';
  std::cin >> length;
  std::cout << "Enter width!" << '\n';
  std::cin >> width;

  //creating area using default constructor
  Area area1;

  //creating area using the third custome constructor
  Area area2(length,width);

  //creating area using the getters and setters
  area1.setLength(length);
  area1.setWidth(width);


  std::cout << "Printing out area1: " << area1.returnArea() << std::endl;

  std::cout << "Printing out area2: " << area2.returnArea() << std::endl;

  return 0;
}

#include <iostream>
// Rectangle class declaration
class Rectangle {
public:
  // constructors
  Rectangle(int width, int height);
  ~Rectangle(){}
  void DrawShape(int aWidth, int aHeight,
    bool UseCurrentVals = false) const;

  private:
    int itsWidth;
    int itsHeight;
  };

  //Constructor implementation
  Rectangle::Rectangle(int width, int height):
  itsWidth(width), // initializations
  itsHeight(height)
  {} // empty body

  // default values used for third parameter
  void Rectangle::DrawShape(int width,int height,bool UseCurrentValue) const{
    int printWidth;
    int printHeight;
    if (UseCurrentValue == true){
      printWidth = itsWidth; // use current class values
      printHeight = itsHeight;
    }
    else{
      printWidth = width; // use parameter values
      printHeight = height;
    }
    for (int i = 0; i<printHeight; i++){
      for (int j = 0; j< printWidth; j++){
        std::cout << "*";
      }
      std::cout << std::endl;
    }
  }

  // Driver program to demonstrate overloaded functions
  int main(){
    // initialize a rectangle to 30,5
    Rectangle theRect(30,5);
    std::cout << "DrawShape(0,0,true)..." << std::endl;
    theRect.DrawShape(0,0,true);
    std::cout << "DrawShape(40,2)..." << std::endl;
    theRect.DrawShape(40,2);
    return 0;
  }

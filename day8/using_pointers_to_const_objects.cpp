#include <iostream>

class Rectangle {
private:
  int itsLength;
  int itsWidth;

public:
  Rectangle ();
  virtual ~Rectangle ();
  void SetLength(int length){itsLength=length;}
  int GetLength() const { return itsLength; }
  void SetWidth(int width){itsWidth=width;}
  int GetWidth() const{return itsWidth;}
};

Rectangle::Rectangle(){
  itsWidth = 5;
  itsLength = 10;
}

Rectangle::~Rectangle(){}

int main(int argc, char const *argv[]) {
  Rectangle * pRect = new Rectangle;
  const Rectangle * pConstRect = new Rectangle;
  Rectangle * const pConstPtr = new Rectangle;

  std::cout << "pRect width: " << pRect->GetWidth()
  << " feet" << std::endl;
  std::cout << "pConstRect width: " << pConstRect->GetWidth()
  <<" feet" <<std::endl;
  std::cout << "pConstPtr width: " << pConstPtr->GetWidth()
  <<" feet" <<std::endl;

  pRect->SetWidth(10);
  // pConstRect->SetWidth(10);
  pConstPtr->SetWidth(10);

  std::cout << "pRect width: " << pRect->GetWidth()
  << " feet" << std::endl;
  std::cout << "pConstRect width: " << pConstRect->GetWidth()
  <<" feet" <<std::endl;
  std::cout << "pConstPtr width: " << pConstPtr->GetWidth()
  <<" feet" <<std::endl;
  
  return 0;
}

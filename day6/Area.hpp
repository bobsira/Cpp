#include <iostream>
class Area {
private:
  int mlength;
  int mwidth;
public:
  void setLength(int length);
  int getLength();
  void setWidth(int width);
  int getWidth();
  int returnArea();
  Area();
  Area(int length, int width);
  // destructor
  ~Area ();
};

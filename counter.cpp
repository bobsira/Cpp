#include <iostream>
using namespace std;
class Counter {
private:
  int position;
public:
  Counter (int n);
  ~Counter ();
  int print();
};
Counter::Counter(int n){
  position = n;
}
int Counter::print(){
  for (int i = 0; i < position; i++) {
    std::cout << "position "<<i+1<<" "<<i <<endl;
  }
}
Counter::~Counter(){}
int main(int argc, char const *argv[]) {
  int x;
  std::cout << "Enter x" << '\n';
  std::cin >> x;
  Counter counter(x);
  counter.print();
  return 0;
}

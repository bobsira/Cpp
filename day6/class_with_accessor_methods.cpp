// Cat class declaration
// Data members are private, public accessor methods
// mediate setting and getting the values of the private data
class Cat {
  // private member data
private:
  int itsAge;
  int itsWeight;

public:
  // public accessors
  int GetAge();
  void SetAge(int Age);

  int GetWeight();
  void SetWeight(int Weight);

  // public member functions
  void Meow();
};

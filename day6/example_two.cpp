class Car {
private:
  int Year;
  char Model[255];
public:
  void Start();
  void Accelerate();
  void Brake();
  void SetYear(int year);
  int GetYear();
};

int main(int argc, char const *argv[]) {
  Car OldFaithful;
  int bought;
  OldFaithful.SetYear(84);
  bought = OldFaithful.GetYear();
  OldFaithful.Start();
  return 0;
}

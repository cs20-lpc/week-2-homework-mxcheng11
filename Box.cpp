template <typename T>
class Box {
private:
    T value;

public:
    // TODO: Constructor

    // TODO: setValue

    // TODO: getValue

    // TODO: print
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}

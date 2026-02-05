#include <iostream>

using namespace std; 
template <typename T>
class Box {
private:
    T value;

public:
      // TODO: Constructor
      Box(){
        value = T();
      }

      Box(T v){
        value = v;
      }
      
    // TODO: setValue
    void setValue(T v)
    {
      value = v;
    }

    // TODO: getValue
    T getValue() const{
      return value;
    }

    // TODO: print
    void print()
    {
      cout << "The value stored in your box is: " << value << endl;
    }
};

int main()
{
  Box<int> intBox(10);
  Box<double> doubleBox(3.14);
  Box<std::string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
}

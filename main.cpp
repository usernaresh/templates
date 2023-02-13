#include <iostream>
#include <memory>

using namespace std;

template <typename T>
class common{
  T count;
  public:
  common(T c): count(c) {}
  ~common(){}
  void add(){
      cout << "final count: " << count+10 << endl;
  }     
};

int main()
{
    cout<<"Templates \n";
    
    common<int> c(3);
    c.add();
    
    common<float> f(3.4);
    f.add();
    
    shared_ptr<common<int>> c1(new common<int>(4));
    
    shared_ptr<common<int>> c2 = c1;
    
    cout << "ptr count: " << c1.use_count() << endl;
    
    c2.reset();
    
    cout << "ptr count: " << c1.use_count() << endl;

    return 0;
}

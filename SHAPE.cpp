#include ,iostream› 
using namespace std;
class rect{
public:
void rectangle (int length, int breadth) 
{
    float area =(length*breadth);
    cout<<area;
}
};
int main(){
int length;
 cin>>length;
  int breadth; 
  cin>>breadth; 
  rect ob;

ob. rectangle (length, breadth);

return 0;
}
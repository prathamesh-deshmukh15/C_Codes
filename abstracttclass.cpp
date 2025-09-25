#include<iostream>
using namespace std;
class Shape{
    public:
    void Set_width(int w){
        width = w;
    }
    void Set_height(int h){
        height = h;
    }
    int AreaOfSquare(int s){
        return s*s;
    }
    int AreaOfRectangle(){
        return width*height;
    }
    protected:
    int width;
    int height;
};
int main() {
    Shape R;  
    R.Set_width(5);  
    R.Set_height(10);  
  
    cout << "The area of rectangle is: " << R.AreaOfRectangle()<< endl;  
  
    cout << "The area of square with side 4 is: " << R.AreaOfSquare(4) << endl;  
  
    return 0;  
}  
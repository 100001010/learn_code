#include<iostream>
using namespace std;
class Coordinate{
    public:
        double x,y;
    Coordinate(double x_coord, double y_coord) {
        x = x_coord;
        y = y_coord;
    }
        
};
class Circle{
    private :
        double _r=10;
        double area(){
            return _r*_r*pi;
        }
    public:
        
        const double pi=3.14;
        Coordinate c;  
        Circle(double radius, const Coordinate& coordinate) : _r(radius), c(coordinate) {
        // The constructor body can remain empty if there are no additional tasks.
        }
        Circle (double r,double x,double y):_r(r),c(x,y){
            
        }
        void print_area(){
            cout<< area();
        }
        void print_Coordinate(){
            cout<<"x:"<<c.x<<endl;
            cout<<"y:"<<c.y<<endl;
        }


};


class 角色{
    protected:
        double 血量;
        double 攻擊力;
        double 防禦力;
    public:
        

        double 普攻 (){
            return 攻擊力;
        }
};
class 輔助 :protected 角色
{

};
class 射手 :public 角色
{

};

int main(){
    
    Coordinate c1_coordinate(2,5);
    Circle c1(2,c1_coordinate);
    Circle c2(2,3,4);
    //cout<<c1.r<<endl;
    //cout<<c1.area()<<endl;
    c1.print_Coordinate();
    c1.print_area();
    
/*
   輔助 a;
   a.攻擊力=9;
   射手 b;
   a.血量-=b.攻擊力-a.防禦力;
*/

}
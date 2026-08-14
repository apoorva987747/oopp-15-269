#include <bits/stdc++.h>
using namespace std;
class Point{
    private:
    int x;
    int y;
    public:
    Point():x{0},y{0} {
        //cout<<"Default construtor"<<endl;
    }
       
    Point(int a=0,int b=0):x{a},y{b} {
        cout<<"Parameterized construtor"<<endl;
    }
    Point add(Point p)
    {
        return Point(x+p.x,y+p.y);
        //NAMELESS OBJECT CREATION CREATION
    }
    void add(Point p,Point q){

    }
    void show()
    {
    cout<<x<<","<<y<<endl;
    }
};
int main()
{
    Point o,s;
    o.show();
    Point q{2,3};
    q.show();
    Point p{4,7};
    p.show();
    Point r=p.add(q);
    r.show();
    s.add(p,q);
    return 0;
}
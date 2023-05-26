#include<iostream>
using namespace std;
class staticmemberfu
{
    
    private:
    
    int a, b;
    
    public:
    
    void getdata(int x, int y)
    {
        int c;
        a=x;
        b=y;
        
        cout<<"Addition is:- \t"<<a+b<<endl;
}

    static void display()
    {
        cout<<"Static Member function There:- \n"<<endl;
    }

};

  
int main()
{
   int p=10, q=20;
    
  
    staticmemberfu::display();
    staticmemberfu s;
    
    s.getdata(p,q);
    
    return 0;
}





#include<iostream>
using namespace std;

class NRP
{
    int rupee, paisa;
    public:
    NRP()
    {
        rupee = 0;
        paisa = 0;
    }

    NRP(int r, int p)
    {
        rupee = r;
        paisa = p;
    }

    void display()
    {
        cout<<"Rupee= "<<rupee<<"  Paisa = "<<paisa<<endl;
    }

    int getrupee()
    {
        return rupee;
    }

    int getpaisa()
    {
        return paisa;
    }

};
class USD
{
    int dollar, cent;
    public:
    USD()
    {
        dollar =0;
        cent =0;
    }

    USD(int d, int c)
    {
        dollar = d;
        cent = c;
    }

    void display()
    {
        cout<<"Dollar = "<<dollar<<" Cent = "<<cent;
    }
    USD(NRP m3)
    {
        dollar= m3.getrupee()/133;
        cent = m3.getpaisa()/90;
        dollar = dollar+cent/100;
        cent = cent%90;
    }
};



//convert from MKS to FPS
int main()
{
    NRP m1(266,180000);
    USD f1;
    f1 = m1;
    m1.display();
    f1.display();
    return 0;
}


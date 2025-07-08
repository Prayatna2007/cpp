// #include<iostream>
// using namespace std;
// class base{
//     public:
//     int a;
//     private:
//     int b;
//     protected:
//     int c;
//     base()
//     {
//         a=20;
//         b=40;
//         c=60;
//     }
// };

// class derived : public base{
//     public:
//     void display()
//     {
//         cout<<"A =  "<<a<<endl;    //A can be access here and access specifier is public
//         cout<<"B =  "<<b<<endl;    //B cannot be accessed ( can only be accessed in base class)
//         cout<<"C =  "<<c<<endl;;   //C can be access here and access specifier is protected
//     }
// };

// class derived1 : protected derived{
//     public:
//     void display()
//     {
//         cout<<"A =  "<<a<<endl;    //A can be access here and access specifier is protected
//         cout<<"B =  "<<b<<endl;    //B cannot be accessed
//         cout<<"C =  "<<c<<endl;;   //C can be access here and access specifier is protected
//     }
// };

// class derived2 : private derived1{
//     public:
//     void display()
//     {
//         cout<<"A =  "<<a<<endl;    //A can be access here and access specifier is private
//         cout<<"B =  "<<b<<endl;    //B cannot be accessed
//         cout<<"C =  "<<c<<endl;;   //C can be access here and access specifier is private
//     }
// };

// int main()
// {   
    
//     return 0;
// }

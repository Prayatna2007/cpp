// #include<iostream>
// using namespace std;

// //Template
// template <class T, class U>
// U find_area(T a,U b)
// {
//     return a*b;
// }
// int main()
// {   
//     cout<<"The area is : "<<find_area(3,5.1)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

//Template
template <class T, class U>
U find_area(T a,U b)
{
    if(a>b)
        return a;
    else    
        return b;
}
int main()
{   
    cout<<"The area is : "<<find_area(75,'A')<<endl;
    return 0;
}
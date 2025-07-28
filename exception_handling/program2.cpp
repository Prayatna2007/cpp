#include<iostream>
#include<exception>
using namespace std;
int main()
{   
    int a[10],elem, ind;
    try{
        cout<<"Enter the index : ";
        cin>>ind;
        if(ind<0 || ind>9)
            throw string("Index is out of bound.");
        cout<<"Enter the element: ";
        cin>>elem;
        if(elem<0)
            throw elem;
        cout<<elem<<" is stored at index "<<ind<<endl;
    }
    catch(const string& h){
        cout<<h<<endl;
    }
    catch(const int& i){
        cout<<i<<" is negative."<<endl;
    }
    return 0;
}

// hehahahahhahhahahhahahhahahah bye
// no refund
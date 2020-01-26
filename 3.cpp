#include<iostream>
#include<vector>
#include "3.h"
using namespace std;
int main()
{
    char greeting[] = "hello";
    // char *p = greeting;
    // p[0] = 'd'; //right
    // cout<<greeting<<endl; //dello
    // const char* p = greeting;//like shared_ptr<const char> p,data is const
    // //p[0] = 'd'; //wrong 
    // char * c;
    // p = c;//right
    // char *const p = greeting;//like shared_ptr<char> const p,data can change,but ,p not change to other pointer;
    // char * c;
    // p = c;
    // p[0] = 'd';
    // cout<<greeting<<endl; //dello
    
    vector<int> a{1,2,3,4};


    // const vector<int>::iterator i = a.begin();
    // cout<<*i;
    // *i = 5;//right
    // cout<<*i;
    // cout<<a[0];
    // i = a.end();/error
 

    // vector<int>::const_iterator i = a.cbegin();
    // cout<<*i;
    // //*i = 5;//error
    // cout<<*i;
    // cout<<a[0];
    // i = a.end();//right

    // TextBlock tb("Hello");
    // cout<<tb[0]; 
    // const CTextBlock cctb("Hello");
    // char *pc = &cctb[0];
    // cout<<cctb[0]<<endl;
    // cout<<pc[0]<<endl;
    // *pc = 'J';
    // cout<<cctb[0]<<endl;


}
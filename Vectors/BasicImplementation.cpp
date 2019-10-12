#include <iostream>
#include <vector>
using namespace std;
int main()
{
        vector<int> g1;
        for(int i=1;i<=5;i++)
                g1.push_back(i);
        cout<< "O/p of begin and end: ";
        for(auto i=g1.begin();i!=g1.end();++i)
                cout<<*i<<" ";
        cout<<"\n O/p of cbegin and cend: ";
        for(auto ir=g1.cbegin();ir!=g1.cend();++ir)
                cout<<*ir<<" ";
        cout<<"\n O/p of crbegin and crend : ";
        for(auto ir=g1.crbegin();ir!=g1.crend();++ir)
                cout<<*ir<<" ";
        return 0;
}

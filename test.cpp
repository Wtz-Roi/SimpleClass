#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.reserve(5);
    for(int i=0;i<5;++i)
    {
        vec.push_back(i);
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}
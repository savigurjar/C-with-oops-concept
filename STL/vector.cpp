#include<iostream>
#include<vector>
using namespace std;
 main()
{
vector<int> v = {12,30,95};
v.push_back(7);
 vector<int>::iterator itr;
//  for(itr = v.begin(); itr != v.end();itr++)
//  {
//     cout<<*itr<<" ";
for(int s:v)
cout<<s<<" "<<endl;
//  } 
 }
#include<iostream>
#include<conio>

using namespace std;

int main()
{

vector<int>v;

// kabeer added this : 

// we have to sort the array descending to get the correct answer


sort(v.begin(),v.end(),greater<int>());

for(int i=0 ; i<v.size() ; i++)
{
cout<<v[i];
}


}

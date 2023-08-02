//Vector class
#include<iostream>
#include<vector>

int main()
{
	std::vector<int> foo (4,400);  //4 int with a value of 400
	std::vector<int> bar (7,700);  //7 int with a value of 700
	
	foo.swap(bar);
	
	std::cout<<"foo contains: ";
	for (unsigned i=0; i<foo.size(); i++)
		std::cout<<""<<foo[i];
	std::cout<<'\n';
	
	std::cout<<"bar contains: ";
	for (unsigned i=0; i<bar.size(); i++)
		std::cout<<" "<<bar[i];
	std::cout<<'\n';
	
	return 0;
	
 }

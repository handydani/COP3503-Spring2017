#include <iostream>
#include "pa3.h"
#include <fstream>
#include <string>
#include <stack>
#include <vector>


class DepthStack
{
	std::vector<std::string> vect;
public:
  DepthStack();

	void push(std::string data)
	{
		vect.push_back(data);
	}
	void pop()
	{
		vect.pop_back();
	}
	std::string top()
	{
		std::string data = vect.back();
		return data;
	}
	int size()
	{
		return vect.size();
	}
};

int main()
{

  return 0;
}

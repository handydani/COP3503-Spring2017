#include <iostream>
#include <vector>

class SimpleStack {
	int depth = 0;
public:
	void push() {
		++depth;
	}
	int pop() {
		return depth--;
	}
	int depthStack() {
		return depth;
	}
};

class stack {
	std::vector<std::string> vect;
public:
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
	int depthOfStack()
	{
		return vect.size();
	}
};


int main() {
	return 0;
}

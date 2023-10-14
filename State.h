#pragma once
#include"stdafh.h"

class State
{
public:
	State();
	~State();

	virtual void  render() = 0;
	virtual void  update(std::stack<State*>* states) = 0;
	
};


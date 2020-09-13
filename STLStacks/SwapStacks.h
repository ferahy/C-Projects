/*
	Yilmaz, Ferah
	Krishcko, Alina

	February 7, 2020

	CS A200
	Lab 1
*/

// Definition function iterSwapStacks
void iterSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
	size_t stackSize1 = stack1.size();
	int temp = 0;

	while(!stack1.empty())
	{
		for (int i = 0; i < stackSize1; ++i)
		{
			stack2.push(stack1.top());
			stack1.pop();
		}

		temp = stack2.top();
		stack2.pop();

		--stackSize1;

		for (int j = 0; j < stackSize1; ++j)
		{
			stack1.push(stack2.top());
			stack2.pop();
		}

		stack2.push(temp);
	}
}

// Definition function recurSwapStacks
void recurSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
	int temp = stack1.top();
	stack1.pop();
	
	if (!stack1.empty())
	{
		recurSwapStacks(stack1, stack2);
	}
	
	stack2.push(temp);
}

// Definition function stlSwapStacks
void stlSwapStacks(stack<int>& stack1, stack<int>& stack2)
{
	stack1.swap(stack2);
}

// Definition function swapStacks
void swapStacks(stack<int>& stack1, stack<int>& stack2)
{
	stack2 = stack1;

	while (!stack1.empty())
	{
		stack1.pop();
	}
}
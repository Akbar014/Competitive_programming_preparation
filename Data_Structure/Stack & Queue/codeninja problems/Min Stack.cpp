#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int>s;
	stack<int>mins;
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
			// min = 0;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			s.push(num);
			if(mins.empty() || num <= mins.top()){
				mins.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(s.size()!=0) {
				int k = s.top();
				s.pop();
				if(!mins.empty() && k == mins.top()){
					mins.pop();
				}
				return k;
				
			}
			else return -1;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(!s.empty()) return s.top();
			else return -1;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			// return min;
			if(!mins.empty()) return mins.top();
			else return -1;
		}
};
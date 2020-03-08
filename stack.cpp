#include<iostream>
#include<stack>

int main()
{
	std::stack<char> st;
	std::string str;
	
	std::cout<<"Enter the expression to check: \n";
	std::cin>>str;

	int i;
	for(i=0; i<str.length(); ++i)
	{
		if((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
		{
			st.push(str[i]);
		}
		else{

			if(st.empty())
				{
					std::cout<<"Mismatch \n";
					break;
				}
			else{
			switch(str[i])
			{
				case '}':
				{	
					if(st.top() == '{')
					{
						st.pop();
					}
					else
					{
						std::cout<<"Mismatch \n";
						exit(0);
					}
				}
				break;
				case ']':
				{
					if(st.top() == '[')
					{
						st.pop();
					}
					else
					{
						std::cout<<"Mismatch \n";
						exit(0);
					}
				}
				break;
				case ')':
				{
					if(st.top() == '(')
					{
						st.pop();
					}
					else
					{
						std::cout<<"Mismatch \n";
						exit(0);
					}
				}
				break;
			}
			}
		
		}
		
		}
		if(i == str.length())
		{
		if(st.empty())
			std::cout<<"The expression is balanced. \n";
		else
			std::cout<<"Mismatch \n";
		}
	return 0;
}

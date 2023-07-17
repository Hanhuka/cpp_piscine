
# include <iostream>
# include "Span.hpp"

int main()
{
	std::cout << "\n[Test 1] - Span(5) add 6 numbers\n";
	{
		Span sp = Span(5);

		try
		{
			sp.addNumber(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "shortest span -> " << sp.shortestSpan() << std::endl;
			std::cout << "longest span -> " << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n[Test 2] - Subject main\n";
	{
		Span sp0 = Span(5);

		try
		{

			sp0.addNumber(6);
			sp0.addNumber(3);
			sp0.addNumber(17);
			sp0.addNumber(9);
			sp0.addNumber(11);
			std::cout << "shortest span -> " << sp0.shortestSpan() << std::endl;
			std::cout << "longest span -> " << sp0.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n[Test 3] - 1k numbers\n";
	{
		Span sp1 = Span(1000);
	
		try
		{
			sp1.addAmount(1000);
			std::cout << "shortest span -> " << sp1.shortestSpan() << std::endl;
			std::cout << "longest span -> " << sp1.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n[Test 4] - 1 number\n";
	{
		Span sp2 = Span(100);
	
		try
		{
			sp2.addNumber(1);
			std::cout << "shortest span -> " << sp2.shortestSpan() << std::endl;
			std::cout << "longest span -> " << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\n[Test 5] - 10k numbers\n";
	{
		Span sp3 = Span(10000);
	
		try
		{
			sp3.addAmount(10000);
			std::cout << "shortest span -> " << sp3.shortestSpan() << std::endl;
			std::cout << "longest span -> " << sp3.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
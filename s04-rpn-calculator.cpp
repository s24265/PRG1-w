#include <algorithm>
#include <iostream>
#include <iterator>
#include <stack>
#include <stdexcept>
#include <string>
#include <vector>
#include <cmath>

auto pop_top(std::stack<double>& stack) -> double
{
    if (stack.empty()) 
    {
        throw std::logic_error{"empty stack"};
    }
    auto element = std::move(stack.top());
    stack.pop();
    return element;
}


auto evaluate_addition(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for +"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a + b);
}

auto evaluate_subtraction(std::stack<double>& stack) -> void
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for -"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a - b);
}

auto evaluate_multiplication(std::stack<double>& stack) -> void //1.mnożenie
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for *"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a * b);
}

auto evaluate_division(std::stack<double>& stack) -> void //2.dzielenie
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for /"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a / b);
}

auto evaluate_tndivision(std::stack<double>& stack) -> void //3.dzielenie całkowitych
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for //"};
    }
    int b = pop_top(stack); //int zamiast auto const
    int a = pop_top(stack); //-||-
    stack.push(a / b);
}

auto evaluate_modulo(std::stack<double>& stack) -> void //4.reszta
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for %"};
    }
    int b = pop_top(stack);
    int a = pop_top(stack);
    stack.push(a % b);
}

auto evaluate_pow(std::stack<double>& stack) -> void //5.potęgowanie
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for **"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(pow(a,b));
}

auto evaluate_sqrt(std::stack<double>& stack) -> void //6.sqrt
{
    if (stack.size() < 1) 
    {
        throw std::logic_error{"not enough operands for sqrt"};
    }    
    auto const a = pop_top(stack);
    stack.push(sqrt(a));
}

auto evaluate_pro(std::stack<double>& stack) -> void //7.procent
{
    if (stack.size() < 2) 
    {
        throw std::logic_error{"not enough operands for %*"};
    }
    auto const b = pop_top(stack);
    auto const a = pop_top(stack);
    stack.push(a / b *100);
}

auto make_args(int argc, char* argv[]) -> std::vector<std::string>
{
    auto args = std::vector<std::string>{};
    std::copy_n(argv, argc, std::back_inserter(args));
    return args;
}

auto main(int argc, char* argv[]) -> int
{
    auto const args = make_args(argc - 1, argv + 1);

    auto stack = std::stack<double>{};
    for (auto const each : args) 
    {
        try 
        {
            if (each == "p")
            {
                std::cout << pop_top(stack) << "\n";
            } 
            else if (each == "+") 
            {
                evaluate_addition(stack);
            } 
            else if (each == "-") 
            {
                evaluate_subtraction(stack);
            }
            else if (each == "*")
            {
                evaluate_multiplication(stack);
            }
            else if (each == "/")
            {
                evaluate_division(stack);
            }
            else if (each == "//")
            {
                evaluate_tndivision(stack);
            }
            else if (each == "%")
            {
                evaluate_modulo(stack);
            }
            else if (each == "**")
            {
                evaluate_pow(stack);
            }
            else if (each == "sqrt")
            {
                evaluate_sqrt(stack);
            }
            else if (each == "%*")
            {
                evaluate_pro(stack);
            }
            else 
            {
                stack.push(std::stod(each));
            }
        } 
        catch (std::logic_error const& e) 
        {
            std::cerr << "error: " << each << ": " << e.what() << "\n";
        }
    }
    return 0;
}

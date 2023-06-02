#include "application.hpp"

#include <iostream>

Application::Application(int value): m_value(value)
{
}

void Application::print(const std::string &message) const
{
    std::cout << message << std::endl;
}

void Application::printValue() const
{
    std::cout << "Value = " << m_value << std::endl;
}

int Application::getValue() const
{
    return m_value;
}

void Application::setValue(int value)
{
    m_value = value;
}

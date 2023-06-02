#pragma once

#include <emscripten/bind.h>

class Application
{
public:
    Application(int value);

    void print(const std::string& message) const;
    void printValue() const;
    int getValue() const;
    void setValue(int value);

private:
    unsigned int m_value;
};

EMSCRIPTEN_BINDINGS(Gravity) {
        emscripten::class_<Application>("Application")
                .constructor<int>()
                .function("print", &Application::print)
                .function("printValue", &Application::printValue)
                .property("value", &Application::getValue, &Application::setValue);
}
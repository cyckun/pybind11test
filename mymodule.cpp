#include <pybind11/pybind11.h>
#include "mock.hpp"

// int add(int a, int b)
// {
//     return a + b;
// }

PYBIND11_MODULE(mymodule, m)
{
    m.doc() = "my test module";
    m.def("add", &add, "add two numbers");
}
#include <stdexcept>
#include <cmath>
#include <chrono>
#include "myfunctions.hpp"

/* For A, the function implementation can be kept simple and straightforward since this 
is the lowest safety level. There are no safety requirements to consider beyond the normal 
programming practices that are already followed. */

double square_A(double num) {
    return num*num;
}

/* For B, we add a check to ensure that the input is non-negative. This helps to prevent 
unexpected behavior that could lead to safety hazards. */

double square_B(double num) {
    if (num >= 0) {
        return num*num;
    } else {
        throw std::invalid_argument("Input must be non-negative");
    }
}

/* For C, we add a check to ensure that the input is finite. This helps to prevent issues 
that could arise from infinite or NaN values, such as division by zero or other unexpected 
behavior. */

double square_C(double num) {
    if (std::isfinite(num)) {
        if (num >= 0) {
            return num*num;
        } else {
            throw std::invalid_argument("Input must be non-negative");
        }
    } else {
        throw std::invalid_argument("Input must be finite");
    }
}

/* For D, we add additional checks to ensure that the computation does not result in overflow 
or underflow errors. This helps to prevent issues that could arise from numerical errors, such 
as incorrect results or unexpected behavior. Note that the code above only checks for overflow 
or underflow in the result of the computation; additional checks might be needed depending on 
the context of the application. */

double square_D(double num) {
    if (std::isfinite(num)) {
        if (num >= 0) {
            double result = num*num;
            if (result == 0 && num != 0) {
                throw std::underflow_error("Result underflow");
            } else if (result > std::numeric_limits<double>::max()) {
                throw std::overflow_error("Result overflow");
            } else {
                return result;
            }
        } else {
            throw std::invalid_argument("Input must be non-negative");
        }
    } else {
        throw std::invalid_argument("Input must be finite");
    }
}
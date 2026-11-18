#include "clubhub/Student.h"

#include <algorithm>
#include <stdexcept>
#include <utility>

namespace clubhub {

Student::Student(std::string id, std::string name, std::string email)
    : id_(std::move(id)),
      name_(std::move(name)),
      email_(std::move(email)) {
    if (id_.empty() || name_.empty()) {
        throw std::invalid_argument("student id and name must not be empty");
    }
    if (email_.find('@') == std::string::npos) {
        throw std::invalid_argument("student email must contain '@'");
    }
}

void Student::giveSmsConsent(std::string phone) {
    const bool isValid = !phone.empty() &&
                         std::all_of(phone.begin(), phone.end(), [](char ch) {
                             return (ch >= '0' && ch <= '9') ||
                                    ch == '+' || ch == ' ';
                         });
    if (!isValid) {
        throw std::invalid_argument(
            "phone number may contain only digits, '+' and spaces");
    }

    phone_ = std::move(phone);
}

void Student::withdrawSmsConsent() noexcept {
    phone_.reset();
}

std::string Student::redacted() const {
    return "Student{id=" + maskId(id_) + "}";
}

std::string maskId(std::string_view id) {
    if (id.size() <= 3) {
        return std::string(id.size(), '*');
    }

    std::string masked(id);
    std::fill(masked.begin() + 2, masked.end() - 1, '*');
    return masked;
}

}  // namespace clubhub

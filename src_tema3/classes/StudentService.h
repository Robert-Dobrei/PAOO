#pragma once

#include <iostream>
#include <thread>
#include <mutex>
#include <memory>
#include <vector>
#include <cstdlib>
#include <ctime>

class StudentService {
    public:
        StudentService();

        void writeNameOnAttendanceSheet(int id, const std::string& name);

        void displayAttendanceSheet() const;

    private:
        std::mutex attendanceMutex;
        std::vector<std::string> attendanceSheet;

        int getRandomDuration(int minDuration, int maxDuration) const;
};
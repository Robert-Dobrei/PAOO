#include "StudentService.h"

StudentService::StudentService() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

void StudentService::writeNameOnAttendanceSheet(int id, const std::string& name) {
    std::this_thread::sleep_for(std::chrono::milliseconds(getRandomDuration(100, 1000)));

    std::lock_guard<std::mutex> lock(attendanceMutex);

    attendanceSheet.push_back(name);

    std::cout << "Student " << id << " wrote their name on the attendance sheet." << std::endl;
}

void StudentService::displayAttendanceSheet() const {
    std::cout << "\nFinal Attendance Sheet:\n";
    for (size_t i = 0; i < attendanceSheet.size(); ++i) {
        std::cout << "Slot " << i + 1 << ": " << attendanceSheet[i] << std::endl;
    }
}

int StudentService::getRandomDuration(int minDuration, int maxDuration) const {
    return std::rand() % (maxDuration - minDuration + 1) + minDuration;
}
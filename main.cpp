#include <iostream>
#include <thread>
#include <vector>

auto print() {
    for (int n = 0; n <= 100; ++n)
        std::cout << n << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<std::thread> th;
    th.reserve(4);
    for (int i = 0; i < 4; ++i) {
        th.emplace_back(std::thread(print));
    }
    for (auto &t:th) {
        t.join();
    }
    return 0;
}

//#include <iostream>
//#include <thread>
//#include <vector>
//
//void print(int n, const std::string& str) {
//    std::cout << n << ":" << str << std::endl;
//}
//int main() {
//
//    std::vector<std::string> s = {
//            "Educative.blog",
//            "Educative",
//            "courses",
//            "are great"
//    };
//    //
//    std::vector<std::thread> threads;
//
//    for (int i = 0; i < s.size(); i++) {
//        threads.push_back(std::thread(print, i, s[i]));
//    }
//    for (auto& th : threads) {
//
//        th.join();
//    }
//    return 0;
//}
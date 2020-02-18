#include<thread>
#include<chrono>
#include<vector>
#include<iostream>
#include<mutex>

std::vector<int> glargevec;
std::vector<int> gsmallvec;
std::mutex gmutex;

void dosomework(int val) {  // do somework in thread
   std::this_thread::sleep_for(std::chrono::seconds(val%2 + 2));
   std::lock_guard<std::mutex> lock(gmutex);
   if (val > 5) {
     glargevec.push_back(val);
   } else {
     gsmallvec.push_back(val);
   }
 }

int main() {
  std::vector<int> numsvec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::vector<std::thread> threadvec;
  for (auto i : numsvec) {
    std::thread dealthread(dosomework, i);
    threadvec.push_back(std::move(dealthread));
  }

  for (std::thread & dealthread : threadvec) {
    dealthread.join();
  }
  for (auto i : glargevec) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
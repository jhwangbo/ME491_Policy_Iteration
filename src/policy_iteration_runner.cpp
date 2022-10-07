#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>
#include "policy_iteration_STUDENTID.h"
#include <iostream>
#include <string>
#include <map>
#include <random>

int main(int argc, char *argv[]) {
  const int map_size = 10;

  Eigen::Matrix<double, map_size, map_size> rewards;
  const double discount_factor = 0.9;
  srand((unsigned int) time(0));

  /// this generates random a reward function
  rewards = (Eigen::Matrix<double, map_size, map_size>::Random().array() - 2.).matrix();

  /// print out your answer
  // 0:up, 1:right, 2:down, 3:left
  std::cout<<"optimal policy \n"<<policyIteration(rewards, discount_factor)<<std::endl;
  return 0;
}

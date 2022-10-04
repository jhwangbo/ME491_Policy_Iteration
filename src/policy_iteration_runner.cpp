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

  std::array<Eigen::Matrix<double, map_size, map_size>, 4> rewards; // 0:up, 1:right, 2:down, 3:left
  const double discount_factor = 0.9;
  srand((unsigned int) time(0));

  /// this generates random a reward function
  for (auto& rew: rewards)
    rew = Eigen::Matrix<double, map_size, map_size>::Random().array() - 2.;

  /// print out your answer
  std::cout<<"optimal policy \n"<<policyIteration(rewards, discount_factor)<<std::endl;
  return 0;
}

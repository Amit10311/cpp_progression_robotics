#include <Eigen/Dense>
#include <utility>

// 1st function :
Eigen::MatrixXd myFirstFunction(const Eigen::MatrixXd &M)
{
  int n = M.rows();
  int p = M.cols();
  Eigen::MatrixXd T(p, n);
  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < p; ++j)
      T(j, i) = M(i, j);
  }
  return T;
};
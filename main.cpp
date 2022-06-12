#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol213;

/* Example 1:
Input: [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
*/
tuple<vector<int>, bool>
testFixture1()
{
  auto input = vector<int>{2, 3, 1, 1, 4};
  return make_tuple(input, true);
}

/* Example 2:
Input: [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum
             jump length is 0, which makes it impossible to reach the last index.

*/
tuple<vector<int>, bool>
testFixture2()
{
  auto input = vector<int>{3, 2, 1, 0, 4};
  return make_tuple(input, false);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - exepct to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.canJump(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Test 2 - exepct to see " << get<1>(f) << endl;
  Solution sol;
  cout << sol.canJump(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}
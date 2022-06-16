#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm> //lower_bound
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>

using namespace sol213;
using namespace std;

/*takeaways
  - greedy
*/

bool Solution::canJump(vector<int> &nums)
{
  auto canReach = nums[0];

  for (auto i = 1; i < nums.size(); i++)
  {
    /* can't reach i from any previous
       locations
    */
    if (i > canReach)
      return false;
    /* see if we can reach further */
    canReach = max(canReach, i + nums[i]);
  }

  return true;
}

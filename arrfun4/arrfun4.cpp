// arrfun4.cpp -- functions with an array range
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    // some systems require preceding int with static to anable array initialization
    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, cookies + 8);  // last 4 elements
    cout << "Last four eaters ate " << sum << " cookies.\n";
    return 0;

}


// return the sum of an integer array
int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
    {
        total = total + *pt;
    }
    return total;
}

int sum(int ar2[][4], int size)
{
    int total = 0;
    for (int r=0; r < size; r++)
        for (int c=0;c<4;c++)
            total += ar2[r][c];
    return total;
}

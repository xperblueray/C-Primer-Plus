// conjust problem 

#include <iostream>
static const int N = 1000;
int main()
{
	using namespace std;
	int i, p, q, id[N];
	for (i = 0; i < N; i++)
		id[i] = i;
	while (cin >> p >> q)
	{
		int t = id[p];
		if (t == id[q]) continue;
		for (i = 0; i < N; i++)
			if (id[i] == t) id[i] = id[q];
		cout << " " << p << " " << q << endl;
	}
	

	
}
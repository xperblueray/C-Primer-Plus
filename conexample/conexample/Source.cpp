#include iostream.h
static const int N = 1000;
int  main()
{

	using namespace std;
	int i, p, q, id[N];
	for (i = 0; i < N; i++)
	{
		int t = id[p];
		if (t == id[q]) continue;
		for (i = 0; i < N; i++)
			if (id[i] == t) id[i] =id[q];
		cout << " " << p << " " << q << endl;
	}
}
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<math.h>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;


int ugly[1500];
int nxt(int d) {
	for (int i = 0; i < 1500; i++) {
		if (ugly[i] == d)
			return ugly[i+1];
	}
	return -1;
}


int main() {
	///printf("The 1500'th ugly number is 859963392.\n");


	int tw = 1, th = 1, fv = 1, idx = 0;
	ugly[0] = 1;
	while (idx < 1500) {
		if ((2 * tw <= 3 * th) && (2 * tw <= 5 * fv)) {
			if (2 * tw > ugly[idx])
				ugly[++idx] = 2 * tw;
			tw = nxt(tw);
			cout<<"TW = "<<tw<<endl;
		} else if ((3 * th <= 2 * tw) && (3 * th <= 5 * fv)) {
			if (3 * th > ugly[idx])
				ugly[++idx] = 3 * th;
			th = nxt(th);
			cout<<"TH = "<<th<<endl;
		}
		else if ((5 * fv <= 3 * th) && (5 * fv <= 2 * tw)) {
			if (5 * fv > ugly[idx])
				ugly[++idx] = 5 * fv;
			fv = nxt(fv);
			cout<<"FV = "<<fv<<endl;
		}
	}
	printf("%d\n", ugly[1499]);

	return 0;
}

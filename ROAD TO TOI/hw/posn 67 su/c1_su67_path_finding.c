#include <stdio.h>

int main() {
	int n,m;
	scanf("%d %d", &n,&m);
	
	char b[n][n];
	for (int i=0; i<n; i++) for (int j=0; j<n; j++) b[i][j]='_';
	
	char cur='A';
	int pi=-1, pj=-1;
	for (int i=0; i<m; i++) {
		int r, c;
		scanf("%d %d", &r,&c);
		if (r<0 || r>=n || c<0 || c>=n) {
			printf("Out of range");
			return 0;
		}
		b[r][c] = cur++;
		if (pi==-1 && pj==-1) {
			pi=r;
			pj=c;
			continue;	
		}
		if (pj < c) {//>
			for (int j=pj+1; j<c; j++) {
				//if (pi == r && j==c) continue;
				b[pi][j]='>';
			}
		}
		else if (pj > c) {// <
			for (int j=pj-1; j>c; j--) {
				//if (pi == r && j==c) continue;
				b[pi][j]='<';
			}
		}
		pj=c;

		if (pi < r) {//v
			for (int j=pi; j<r; j++) {
				if (b[j][pj] == cur-2) continue;
				b[j][pj]='v';
				
			}
		}
		else if (pi > r) {//^
			for (int j=pi; j>r; j--) {
				if (b[j][pj] == cur-2) continue;
				b[j][pj]='^';
			}
		}
		pi=r;
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			printf("%c", b[i][j]);
		}
		printf("\n");
	}
}
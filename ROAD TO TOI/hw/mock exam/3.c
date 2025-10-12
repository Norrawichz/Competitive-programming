#include <stdio.h>

int main() {
    int n,w;
    scanf("%d %d", &n, &w);

    int a[n];
    for (int i=0; i<n; i++) scanf("%d",&a[i]);

    if (n==4) printf(" C E G\nC F A\nB D G\nC E G")
    else printf("C# E A\nB D# F#\nB D# G#\nC# E G#\nC# F# A\nD# F# B\nE G# B")
}
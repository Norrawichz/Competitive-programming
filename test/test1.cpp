#include <stdio.h>
using namespace std;

char st1[] = "ILOVECOMPUTER";
char st2[] = {'K', 'M' ,'I', 'T', 'L', '1', '2', '3'};
int x,y;
char *p1, *p2;
int main() {

    p1 = st1;
    p2 = st2+3;
    for (x=2; x<=4; x++) {
        p1++;
        p2++;
        printf("%c %c", *p2, *p1);
        p1+=x;
    }
    /*

    
    
    */
    // 1.หาพื้นที่ วงกลม สามเหลี่ยม สี่เหลี่ยม
    // 2. หาผลรวมตั้งแต่ 1 ถึง n;
    // 2.1 หาผลรวมเลขคู่/คี่ 200 จำนวนแรก
    /*int sum=0;
    for (int i=1; i<=400; i++) {
        if (i%2 == 1) sum+=i;
    }
    cout<< sum;*/
    // 3.ข้อbasic 10 ข้อ

    /*int n=1, sum=0;
    while (n<=50) {
        sum+=n;
        n++;
    }
    cout<< sum;*/
    
    /*for (int i=1; i<=5; i++) {
        for (int j=1; j<=5-i; j++) {
            cout<< "  ";
        }
        for (int j=1; j<=i; j++) {
            cout<< "* ";
        }
        cout<< endl;
    }*/


}
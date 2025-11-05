#include <stdio.h>
#include <string.h>

int rak[100];
int jumlah = 0;

int inNum(int num);
int outNum();
void seeTable();

int main() {
int x;
char perintah[10];

while (scanf ("%s", perintah)!=EOF){
    if (strcmp (perintah,"IN")==0){
        scanf ("%d", &x);
        inNum(x);
    } else if (strcmp (perintah, "OUT")==0){
        outNum ();
    } else if (strcmp (perintah, "SEE")==0){
        seeTable ();
    }
}

return 0;
}

int inNum(int num) {
    if (jumlah>=100) {
        printf ("FULL\n");
        return 0;
    }
    
    for (int i=jumlah; i>0; i--) rak [i]= rak[i-1];
    rak[0] = num;
    jumlah++;
    printf ("OK\n");
return 1;
}

int outNum() {
if (jumlah==0) {
    printf ("EMPTY\n"); 
    return -1;
} else {
    int id = rak[0];
    for (int i=0; i<jumlah-1; i++) rak [i] = rak [i+1];
    jumlah--;
    printf ("REMOVED %d\n", id);
}
return 0;
}

void seeTable() {

    for (int i=jumlah-1; i>=0; i--) printf ("%d ", rak [i]);
    printf ("\n");

}
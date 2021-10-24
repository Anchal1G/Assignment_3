#include<stdio.h>
#include<string.h>

long long compute_hash(char *st) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;
    for (int c=0;c<strlen(st);c++) {
        hash_value = (hash_value + (st[c] - 'A' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}
int main()
{
    char st[1000];
    printf("Enter the String (upper case)\n");
    scanf("%[^\n]s",st);
    printf("Hash value: %ld",compute_hash(st));
}
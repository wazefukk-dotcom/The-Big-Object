#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long llu;

#define TRUE 1
#define FALSE 0

#define E 2.718281828459

float fmaf(float x, float y, float z) {
    return (x * y) + z;
}

double fma(double x, double y, double z) {
    return (x * y) + z;
}

long double fmal(long double x, long double y, long double z) {
    return (x * y) + z;
}

float fabsf(float x) {
    if (x < 0)
        return 0 - x;
    return x;
}

double fabs(double x) {
    if (x < 0)
        return 0 - x;
    return x;
}

long double fabsl(long double x) {
    if (x < 0)
        return 0 - x;
    return x;
}

float fminf(float x, float y) {
    if (x > y)
        return y;
    else if (x < y)
        return x;
    return +0;
}

double fmin(double x, double y) {
    if (x > y)
        return y;
    else if (x < y)
        return x;
    return +0;
}

long double fminl(long double x, long double y) {
    if (x > y)
        return y;
    else if (x < y)
        return x;
    return +0;
}

float fmaxf(float x, float y) {
    if (x > y)
        return x;
    else if (x < y)
        return y;
    return +0;
}

double fmax(double x, double y) {
    if (x > y)
        return x;
    else if (x < y)
        return y;
    return +0;
}

long double fmaxl(long double x, long double y) {
    if (x > y)
        return x;
    else if (x < y)
        return y;
    return +0;
}

float powf(float x, float y) {
    float out = x;
    while (--y)
        out *= x;
    return out;
}

double pow(double x, double y) {
    double out = x;
    while (--y)
        out *= x;
    return out;
}

long double powl(long double x, long double y) {
    long double out = x;
    while (--y)
        out *= x;
    return out;
}

float exp2f(float x) {
    return powf(2, x);
}

double exp2(double x) {
    return pow(2, x);
}

long double exp2l(long double x) {
    return powl(2, x);
}

float expf(float x) {
    return powf(E, x);
}

double exp(double x) {
    return pow(E, x);
}

long double expl(long double x) {
    return powl(E, x);
}

float expm1f(float x) {
    return powf(E, x) - 1;
}

double expm1(double x) {
    return pow(E, x) - 1;
}

long double expm1l(long double x) {
    return powl(E, x) - 1;
}

float fmodf(float x, float y) {
    if (x == y) return 0;
    while (x > 0)
        x -= y;
    return x + y;
}

double fmod(double x, double y) {
    if (x == y) return 0;
    while (x > 0)
        x -= y;
    return x + y;
}

long double fmodl(long double x, long double y) {
    if (x == y) return 0;
    while (x > 0)
        x -= y;
    return x + y;
}

float ceilf(float x) {
    if (fmodf(x, 1) == 0)
        return x;
    return (x - fmodf(x, 1)) + 1;
}

double ceil(double x) {
    if (fmod(x, 1) == 0)
        return x;
    return (x - fmod(x, 1)) + 1;
}

long double ceill(long double x) {
    if (fmodl(x, 1) == 0)
        return x;
    return (x - fmodl(x, 1)) + 1;
}

float floorf(float x) {
    if (fmodf(x, 1) == 0)
        return x;
    return x - fmodf(x, 1);
}

double floor(double x) {
    if (fmod(x, 1) == 0)
        return x;
    return x - fmod(x, 1);
}

long double floorl(long double x) {
    if (fmodl(x, 1) == 0)
        return x;
    return x - fmodl(x, 1);
}

float truncf(float x) {
    return floorf(x);
}

double trunc(double x) {
    return floor(x);
}

long double truncl(long double x) {
    return floorl(x);
}

float roundf(float x) {
    if (fmodf(x, 1) >= 0.5)
        return (x - fmodf(x, 1)) + 1;
    else
        return x - fmodf(x, 1);
}

double round(double x) {
    if (fmod(x, 1) >= 0.5)
        return (x - fmod(x, 1)) + 1;
    else
        return x - fmod(x, 1);
}

long double roundl(long double x) {
    if (fmodl(x, 1) >= 0.5)
        return (x - fmodl(x, 1)) + 1;
    else
         return x - fmodl(x, 1);
}


long lroundf(float x) {
    if (fmodf(x, 1) >= 0.5)
        return (long)(x - fmodf(x, 1)) + 1;
    else
         return (long)(x - fmodf(x, 1));
}

long lround(double x) {
    if (fmod(x, 1) >= 0.5)
        return (long)(x - fmod(x, 1)) + 1;
    else
         return (long)(x - fmod(x, 1));
}

long lroundl(long double x) {
    if (fmodl(x, 1) >= 0.5)
        return (long)(x - fmodl(x, 1)) + 1;
    else
         return (long)(x - fmodl(x, 1));
}

long long llroundf(float x) {
    if (fmodf(x, 1) >= 0.5)
        return (long long)(x - fmodf(x, 1)) + 1;
    else
         return (long long)(x - fmodf(x, 1));
}

long long llround(double x) {
    if (fmod(x, 1) >= 0.5)
        return (long long)(x - fmod(x, 1)) + 1;
    else
         return (long long)(x - fmod(x, 1));
}

long long llroundl(long double x) {
    if (fmodl(x, 1) >= 0.5)
        return (long long)(x - fmodl(x, 1)) + 1;
    else
         return (long long)(x - fmodl(x, 1));
}

float remainderf(float x, float y) {
    return x - roundf(x / y) * y;
}

double remainder(double x, double y) {
    return x - round(x / y) * y;
}

long double remainderl(long double x, long double y) {
    return x - roundl(x / y) * y;
}

float modff(float x, float *y) {
    *y = 0;
    while (x - *y > 0)
        *y++;
    return x - *y;
}

double modf(double x, double *y) {
    *y = 0;
    while (x - *y > 0)
        *y++;
    return x - *y;
}

long double modfl(long double x, long double *y) {
    *y = 0;
    while (x - *y > 0)
        *y++;
    return x - *y;
}

float ldexpf(float x, int y) {
    return x * powf(2, y);
}

double ldexp(double x, int y) {
    return x * pow(2, y);
}

long double ldexpl(long double x, int y) {
    return x * powl(2, y);
}

float fdimf(float x, float y) {
    if (x <= y) return +0;
    return x - y;
}

double fdim(double x, double y) {
    if (x <= y) return +0;
    return x - y;
}

long double fdiml(long double x, long double y) {
    if (x <= y) return +0;
    return x - y;
}

float sqrtf(float x) {
    int i = 1;
    float out = 6;
    while (i != 15) {
        out = 0.5 * (out + (x / out));
        i++;
    }
    return out;
}

double sqrt(double x) {
    int i = 1;
    double out = 6;
    while (i != 15) {
        out = 0.5 * (out + (x / out));
        i++;
    }
    return out;
}

long double sqrtl(long double x) {
    int i = 1;
    long double out = 6;
    while (i != 15) {
        out = 0.5 * (out + (x / out));
        i++;
    }
    return out;
}

float cbrtf(float x) {
    int i = 1;
    float out = 6;
    while (i != 15) {
        out = (1/3) * ((x / out) + (2 * out));
        i++;
    }
    return out;
}

double cbrt(double x) {
    int i = 1;
    double out = 6;
    while (i != 15) {
        out = (1/3) * ((x / out) + (2 * out));
        i++;
    }
    return out;
}

long double cbrtl(long double x) {
    int i = 1;
    long double out = 6;
    while (i != 15) {
        out = (1/3) * ((x / out) + (2 * out));
        i++;
    }
    return out;
}

float hoypotf(float x, float y) {
    return sqrtf(powf(x, 2) + powf(y, 2));
}

double hoypot(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

long double hoypotl(long double x, long double y) {
    return sqrtl(powl(x, 2) + powl(y, 2));
}

float scalbnf(float x, int y) {
    return x * pow(2, (double)y);
}

double scalbn(double x, int y) {
    return x * pow(2, (double)y);
}

long double scalbnl(long double x, int y) {
    return x * pow(2, (double)y);
}

float scalblnf(float x, long y) {
    return x * powl(2, (long double)y);
}

double scalbln(double x, long y) {
    return x * powl(2, (long double)y);
}

long double scalblnl(long double x, long y) {
    return x * powl(2, (long double)y);
}

char* strcpy(char* dest, char* src) {
    while (*src)
        *dest++ = *src++;
    return dest;
}

char* strncpy(char* dest, char* src, size_t size) {
    while (*src && size) {
        *dest++ = *src++;
        size--;
    }
    return dest;
}

char* strcat(char* dest, char* src) {
    int size = 0, num = 0;
    while (dest[size])
        size++;
    while (src[num]) {
        dest[size + num] = src[num];
        num++;
    }
    return dest;
}

char* strncat(char* dest, char* src, size_t size) {
    int len = 0, num = 0;
    while (dest[len])
        len++;
    while (src[len] != size) {
        dest[len + num] = src[num];
        num++;
    }
    return dest;
}

size_t strlen(char* in) {
    size_t out = 0;
    while (in[out] != 0) out++;
    return out - 1;
}

int strcmp(char* a, char* b) {
    int as = 0, bs = 0;

    while (*a)
        as += *a++;
    while (*b)
        bs += *b++;

    if (as > bs) return -1;
    if (as < bs) return 1;
    return 0;
}

int strncmp(char* a, char* b, size_t size) {
    int as = 0, bs = 0, num = 0;

    while (num != size) {
        as += a[num];
        bs += b[num];
    }

    if (as > bs) return -1;
    if (as < bs) return 1;
    return 0;
}

char* strchr(char* str, int chr) {
    while (*str) {
        if (*str == chr)
            return str;
        str++;
    }
    return NULL;
}

char* strrchr(char* str, int chr) {
    char *out = NULL;
    while (*str) {
        if (*str == chr)
            out = str;
        str++;
    }
    return out;
}

size_t strspn(char* dest, char* src) {
    size_t out = 0;
    while (*dest) {
        for (int i = 0; src[i] != 0; i++)
            if (src[i] == *dest) {
                out++;
                goto loop;
            }
        return out;
        loop:
        dest++;
    }
    return out;
}

size_t strcspn(char* dest, char* src) {
    size_t out = 0;
    while (*dest) {
        for (int i = 0; src[i] != 0; i++)
            if (src[i] == *dest) {
                return out;
            }
        out++;
        dest++;
    }
    return out;
}

char* strpbrk(char* dest, char* src) {
    while (*dest) {
        for (int i = 0; src[i] != 0; i++)
            if (src[i] == *dest) {
                return dest;
            }
        dest++;
    }
    return NULL;
}

char* strstr(char* dest, char* src) {
    int len = strlen(src);
    char *ptr = NULL;
    while (*dest) {
        ptr = dest;
        for (int i = 0; src[i] != 0 && *ptr != 0; i++) {
            if (*ptr == src[i]) {
                if (src[i + 1] == 0)
                    return dest - len;
                else break;
                ptr++;
            }
        }
        dest++;
    }
    return NULL;
}

char* memchr(void* dest, int chr, size_t count) {
    size_t fill = 0;
    while (fill != count) {
        if (*(char*)dest++ == chr)
            return (char*)dest;
        fill++;
    }
    return NULL;
}

int memcmp(void* a, void* b, size_t count) {
    int as = 0, bs = 0;
    size_t fill = 0;

    while (fill != count) {
        as += *(char*)a++;
        fill++;
    }
    fill = 0;
    while (fill != count) {
        bs += *(char*)b++;
        fill++;
    }

    if (as > bs) return 1;
    if (as < bs) return -1;
    return 0;
}

void* memset(void* dest, int src, size_t count) {
    size_t fill = 0;
    while (fill != count)
        *((unsigned char*)dest + fill++) = (unsigned char)src;
    return dest;
}

void* memcpy(void* dest, void* src, size_t count) {
    size_t fill = 0;
    while (fill != count) {
        *(unsigned char*)dest++ = *(unsigned char*)src++;
        fill++;
    }
    return dest;
}

void* memmove(void* dest, void* src, size_t count) {
    size_t fill = 0;
    while (fill != count) {
        *(unsigned char*) dest++ = *(unsigned char*)src;
        fill++;
    }
    return dest;
}

void* malloc_init(size_t size, unsigned char init) {
    void* out = malloc(size);
    for (size_t i = 0; i < size; i++)
        *((unsigned char*)(out + i)) = init;
    return out;
}

llu STRlen(char *in) {
    llu out = 0;
    while (in[out]) out++;
    return out;
}

char* load(char* path) {
    char buffer[200000];
    llu size = 0, temp;
    FILE *file  = fopen(path, "r");
    while (fgets(buffer, 200000, file))
        size += STRlen(buffer) + 1;
    rewind(file);
    char *out = malloc(size);
    size = 0;
    while (fgets(buffer, 200000, file)) {
        temp = STRlen(buffer);
        for (int i = 0; i < temp; i++)
            out[size + i] = buffer[i];
        size += temp;
    }
    return out;
}

void DogCipher_encode(char* inpath, char* outpath) {
    FILE *out = fopen(outpath, "w");
    char *in = load(inpath);
    llu len = STRlen(in);

    fprintf(out, "+%hhu ", *in);

    for (llu i = 0; i < len; i++) {
        if (in[i] > in[i - 1])
            fprintf(out, "+%d ", in[i] - in[i - 1]);
        else if (in[i] < in[i - 1])
            fprintf(out, "-%d ", in[i - 1] - in[i]);
        else fputs("+0 ", out);
    }

    free(in);
}

void DogCipher_decode(char* inpath, char* outpath) {
    FILE *out = fopen(outpath, "w");
    char *in = load(inpath), buffer[10], *ptr = in;
    llu len = STRlen(in);
    unsigned char num = 0;
    int tokenlen;

    while (sscanf(ptr, "%s %n", buffer, tokenlen) == 1) {
        num += atoi(buffer);
        ptr += tokenlen;
        fputc(num, out);
    }

    free(in);
}

void BFCipher_encode(char* inpath, char* outpath) {
    FILE *out = fopen(outpath, "w");
    char *in = load(inpath);
    llu len = STRlen(in);
    unsigned char temp = 0;

    for (llu i = 0; i < len; i++) {
        if (in[i] > temp)
            while (temp != in[i]) {
                fputc('+', out);
                temp++;
            }
        else if (in[i] < temp)
            while (temp != in[i]) {
                fputc('-', out);
                temp++;
            }
        fputc('.', out);
    }

    free(in);
}

void BFCipher_decode(char* inpath, char* outpath) {
    FILE *out = fopen(outpath, "w");
    char *in = load(inpath);
    llu len = STRlen(in);
    unsigned char temp = 0;

    for (llu i = 0; i < len; i++) {
        switch (in[i]) {
            case '+':
            temp++;
            break;

            case '-':
            temp--;
            break;

            case '.':
            fputc(temp, out);
            break;
        }
    }

    free(in);
}

llu dogc_add(llu a, llu b) { return a + b; }
llu dogc_sub(llu a, llu b) { return a - b; }
llu dogc_mult(llu a, llu b) { return a * b; }
llu dogc_divi(llu a, llu b) { return a / b; }
llu dogc_modu(llu a, llu b) { return a % b; }
llu dogc_XOR(llu a, llu b) { return a ^ b; }
llu dogc_AND(llu a, llu b) { return a & b; }
llu dogc_OR(llu a, llu b) { return a | b; }
llu dogc_LSHIFT(llu a, llu b) { return a << b; }
llu dogc_RSHIFT(llu a, llu b) { return a >> b; }
llu dogc_NOT(llu in) { return ~in; }

llu tri(llu in) { return in + (in + 1) / 2; }

llu fact(llu in) {
    llu out = in;
    while (--in)
        out *= in;
    return out;
}

llu powint(llu a, llu b) {
    llu out = a;
    while (--b)
        out *= a;
    return out;
}

long long toInt(char* in) {
    llu base = 10;
    int len = STRlen(in) + 1, temp;
    for (int i = 0; i < len; i++)
        base *= 10;
    long long val = 0;

    for (int i = 0; i < len; i++) {
        base /= 10;
        temp = 11;
        for (int j = 0; j < 10; j++)
            if ((j + '0') == in[i]) {
                temp = j;
                break;
            }
        if (temp == 11) continue;
        val += temp * base;
    }

    return (in[0] == '-') ? 0 - val : val;
}

void fileHider(char* inpath, char* outpath) {
    FILE *out = fopen(outpath, "w");
    char *in = load(inpath);
    llu len = STRlen(in);

    fprintf(out,
        "section .text\n"
        "    global _start\n\n"

        "_put:\n"
        "    mov rax, 1\n"
        "    mov rdi, 1\n"
        "    mov rsi, rsp\n"
        "    mov rdx, 1\n"
        "    syscall\n"
        "    ret\n\n"

        "_start:\n"
        "    mov [rsp], %hhu\n"
        "    call _put\n",
        *in
    );

    for (llu i = 1; i < len; i++) {
        if (in[i] > in[i - 1])
            fprintf(out, "    add [rsp], %d\n", in[i] - in[i - 1]);
        else if (in[i] < in[i - 1])
            fprintf(out, "    add [rsp], %d\n", in[i - 1] - in[i]);
        fprintf(out, "    call _put\n");
    }
}

llu ItAddClassic(char* in) {
    llu len = STRlen(in), out = 0;
    int mode = 0, temp;

    for (llu i = 0; i < len; i++) {
        switch (in[i]) {
            case '+':
            mode = 0;
            break;

            case '-':
            mode = 1;
            break;

            case '*':
            mode = 2;
            break;

            case '/':
            mode = 3;
            break;

            default:
            temp = 11;
            for (int j = 0; j < 10; j++)
                if ((j + '0') == in[i]) {
                    temp = j;
                    break;
                }
            if (temp == 11) continue;
            switch (mode) {
                case 0:
                out += temp;
                break;

                case 1:
                out -= temp;
                break;

                case 2:
                out *= temp;
                break;

                case 3:
                out /= temp;
                break;
            }
        }
    }
    return out;
}

int STReq(char* a, char* b) {
    return strcmp(a, b) == 0;
}

char* substr(char* src, size_t index, size_t len) {
    char out[len + 1];
    for (size_t i = 0; i < len; i++)
        out[i] = src[index + len];
    out[len] = 0;
    return out;
}

int charinstr(char* str, char chr) {
    while (*str)
        if (*str++ == chr)
            return TRUE;
    return FALSE;
}

// secretly makes code ugly
void BF_beautifulizer(char* inpath, char* outpath) {
    char* in = load(inpath);
    FILE *out = fopen(outpath, "w");
    size_t len = STRlen(in);
    int indent = 0;

    for (size_t i = 0; i < len; i++) {
        if (!charinstr("+-<>[].,", in[i]))
            continue;

        if (in[i] == ']')
            indent--;

        for (int j = 0; j < indent; j++)
            fputs("    ", out);

        fprintf(out, "%c\n", in[i]);

        if (in[i] == '[')
            indent++;
    }

    free(in);
    fclose(out);
}

// WHY ARE THERE SO MANY IF STATEMENTS
void BF_beautifier(char* inpath, char* outpath) {
    char* in = load(inpath);
    FILE *out = fopen(outpath, "w");
    size_t len = STRlen(in);
    int indent = 0;

    for (size_t i = 0; i < len; i++) {

        if (in[i - 1] == '[' || in[i - 1] == ']') {
            for (int j = 0; j < indent; j++)
                fputs("    ", out);
        }

        if (!charinstr("+-<>[].,", in[i]))
            continue;

        if (in[i] == '[') {
            indent++;
            fputs("[\n", out);
            continue;
        }

        if (in[i] == ']') {
            indent--;
            fputs("]\n", out);
            continue;
        }

        fputc(in[i], out);
    }

    free(in);
    fclose(out);
}

void BFtoBFIR(char* inpath, char* outpath) {
    char* in = load(inpath);
    FILE *out = fopen(outpath, "w");
    size_t len = STRlen(in);
    int temp;

    for (size_t i = 0; i < len; i++) {
        switch (in[i]) {
            case '[':
            fputs("OPEN\n", out);
            break;

            case ']':
            fputs("CLOSE\n", out);
            break;

            case ',':
            fputs("GET\n", out);
            break;

            case '.':
            fputs("PUT\n", out);
            break;

            case '+':
            if (in[i + 1] == '+') {
                temp = 0;
                while (in[i + temp] == '+') temp++;
                fprintf(out, "ADD %d\n", temp);
                i += --temp;
                break;
            }
            fputs("INC\n", out);
            break;

            case '-':
            if (in[i + 1] == '-') {
                temp = 0;
                while (in[i + temp] == '-') temp++;
                fprintf(out, "SUB %d\n", temp);
                i += --temp;
                break;
            }
            fputs("DEC\n", out);
            break;

            case '<':
            if (in[i + 1] == '<') {
                temp = 0;
                while (in[i + temp] == '<') temp++;
                fprintf(out, "MOVLM %d\n", temp);
                i += --temp;
                break;
            }
            fputs("MOVL\n", out);
            break;

            case '>':
            if (in[i + 1] == '>') {
                temp = 0;
                while (in[i + temp] == '>') temp++;
                fprintf(out, "MOVRM %d\n", temp);
                i += --temp;
                break;
            }
            fputs("MOVR\n", out);
            break;
        }
    }
    free(in);
    fclose(out);
}

void BFIRcomp(char* inpath, char* outpath) {
    char inbuf[255], buffer[2][20];
    FILE *in = fopen(inpath, "r"), *out = fopen(outpath, "w");
    int bstacksize = 0, hnum = 0, temp;

    while (fgets(inbuf, 255, in)) {
        sscanf(inbuf, "%s", buffer[0]);
        if (STReq(buffer[0], "OPEN")) bstacksize++;
    }

    fprintf(out,
        "section .bss\n"
        "    mem resB 8192\n\n "
        "section .text\n"
        "    global _start\n\n"
        "_put:\n"
        "    mov rax, 1\n"
        "    mov rdi, 1\n"
        "    lea rsi, [mem + r8]\n"
        "    mov rdx, 1\n"
        "    syscall\n"
        "    ret\n\n"
        "_get:\n"
        "    mov rax, 0\n"
        "    mov rdi, 0\n"
        "    lea rsi, [mem + r8]\n"
        "    mov rdx, 1\n"
        "    syscall\n"
        "    ret\n\n"
        "_start:\n"
        "    mov r8, 0\n"
    );

    long long *bstack = (long long*)malloc(sizeof(long long) * bstacksize);
    rewind(in);
    bstacksize = 0;

    while (fgets(inbuf, 255, in)) {
        if (sscanf(inbuf, "%s %s", buffer[0], buffer[1]) == 0)
            continue;

        if (STReq(buffer[0], "OPEN")) {
            *((long long*)(bstack + (bstacksize++ * sizeof(long long)))) = ++hnum;

            fprintf(out,
                "    cmp BYTE [mem + r8], 0\n"
                "    je _L%d\n\n"
                "_L%d:\n",
                (hnum + 1), hnum
            );
        } else if (STReq(buffer[0], "CLOSE")) {
            temp = *((long long*)(bstack + (--bstacksize * sizeof(long long))));
            hnum++;

            fprintf(out,
                "    cmp BYTE [mem + r8], 0\n"
                "    jne _L%d\n\n"
                "_L%d:\n",
                temp, hnum
            );
        } else if (STReq(buffer[0], "INC")) {
            fputs("    inc BYTE [mem + r8]\n", out);
        } else if (STReq(buffer[0], "DEC")) {
            fputs("    dec BYTE [mem + r8]\n", out);
        } else if (STReq(buffer[0], "MOVR")) {
            fputs("    inc r8\n", out);
        } else if (STReq(buffer[0], "MOVL")) {
            fputs("    dec r8\n", out);
        } else if (STReq(buffer[0], "ADD")) {
            fprintf(out, "    add BYTE [mem + r8], %s\n", buffer[1]);
        } else if (STReq(buffer[0], "SUB")) {
            fprintf(out, "    sub BYTE [mem + r8], %s\n", buffer[1]);
        } else if (STReq(buffer[0], "MOVRM")) {
            fprintf(out, "    add r8, %s\n", buffer[1]);
        } else if (STReq(buffer[0], "MOVLM")) {
            fprintf(out, "    sub r8, %s\n", buffer[1]);
        } else if (STReq(buffer[0], "PUT")) {
            fputs("    call _put\n", out);
        } else if (STReq(buffer[0], "GET")) {
            fputs("    call _get\n", out);
        }
    }

    fputs(
        "    mov rax, 60\n"
        "    mov rdi, 0\n"
        "    syscall", out 
    );
    fclose(out);
    free(bstack);
}
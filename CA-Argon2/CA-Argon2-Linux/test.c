#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <assert.h>

#include "argon2.h"

#define OUT_LEN 32
#define ENCODED_LEN 108

static void fatal(const char* error) {
    fprintf(stderr, "Error: %s\n", error);
    exit(1);
}

/* Test harness will assert:
 * argon2_hash() returns ARGON2_OK
 * HEX output matches expected
 * encoded output matches expected
 * argon2_verify() correctly verifies value
 */

void hashtest(uint32_t version, uint32_t t, uint32_t m, uint32_t p, char* pwd,
    char* salt, uint32_t outlen, argon2_type type) {
    unsigned char* out;
    unsigned char* hex_out;
    out = malloc(outlen);
    hex_out = malloc(outlen * 2 + 4);
    char* encoded;
    int encodedlen = outlen * 2 + 76;
    encoded = malloc(encodedlen + 1);
    int ret, i;
    printf("Type:   CA-Argon2\n");
    printf("Memory:     %d KiB\n", 1 << m);
    printf("Parallelism:    %d\n", p);

    ret = argon2_hash(t, 1 << m, p, pwd, strlen(pwd), salt, strlen(salt), out,
        outlen, encoded, encodedlen, type, version);
    if (ret != ARGON2_OK)
        fatal(argon2_error_message(ret));

    for (i = 0; i < outlen; ++i)
        sprintf((char*)(hex_out + i * 2), "%02x", out[i]);


    printf("\n");
    printf("Hash:     ");
    printf("%s", hex_out);
    printf("\n");

    printf("Encoded:  \n");
    printf("%s", encoded);
    printf("\n");

    free(out);
    free(hex_out);
    free(encoded);
}


int main(int argc, char* argv[]) {
    int l = OUT_LEN;
    int ret;
    unsigned char* out;
    char const* msg;
    int version;
    int m;
    int p;
    int v;
    int t;
    int t_max;

    char* password;
    char* salt;

    password = argv[1];
    salt = argv[2];

    for (int i = 3; i < argc; i++)
    {
        const char* a = argv[i];
        unsigned long input = 0;

        if (!strcmp(a, "-t"))
        {
            i++;
            input = strtoul(argv[i], NULL, 10);
            t_max = input;
        }
        else if (!strcmp(a, "-p"))
        {
            i++;
            input = strtoul(argv[i], NULL, 10);
            p = input;
        }
        else if (!strcmp(a, "-m"))
        {
            i++;
            input = strtoul(argv[i], NULL, 10);
            m = input;
        }
        else if (!strcmp(a, "-l"))
        {
            i++;
            input = strtoul(argv[i], NULL, 10);
            l = input;
        }
    }
    
    srand((unsigned)time(NULL));

    t = (rand() % t_max) + 1;

    version = ARGON2_VERSION_13;

    hashtest(version, t, m, p, password, salt, l, Argon2_i);

    return 0;
}

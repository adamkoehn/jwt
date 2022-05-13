#include <stdio.h>
#include <string.h>
#include <jwt.h>

int decode(jwt_t **jwt, const char *token)
{
    int failure = 0;
    failure = jwt_decode(jwt, token, 0, 0);
    if (failure)
    {
        printf("decode failed: %s\n", strerror(failure));
        return failure;
    }

    jwt_dump_fp(*jwt, stdout, 1);
    return failure;
}

int main(int argc, char **argv)
{
    int ret = 0;
    jwt_t *jwt = 0;

    if (argc < 2)
    {
        printf("usage: jwt <token>");
        return 1;
    }

    jwt_new(&jwt);
    ret = decode(&jwt, argv[1]);
    jwt_free(jwt);

    return ret;
}
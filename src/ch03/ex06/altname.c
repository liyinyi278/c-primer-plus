#include <stdio.h>
#include <inttypes.h>
#include <assert.h>

int main(void)
{
    int32_t me32;

    me32 = 45933945;

    static_assert(sizeof(int32_t) == 4, "int32_t is not 4 bytes");    

    printf("First, assume int32_t is int: me32 = %d\n", me32);

    printf("Next,  let's not make any assumptions.\n");

    printf("Instead, use a \"macro\" from inttypes.h: me32 = %" PRId32 "\n", (int32_t)me32);

    return 0;
}
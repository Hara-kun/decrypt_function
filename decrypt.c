#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //暗号化されたフラグ
    char arg_ch[] = {0x7d, 0x56, 0x18, 0x43, 0x15, 0x67, 0x0f, 0x0a, 0x1c,
                     0x28, 0x3b, 0x76, 0x05, 0x30, 0x00, 0x50, 0x54, 0x0c,
                     0x59, 0x09, 0x1f, 0x7d, 0x0d, 0x3a, 0x02, 0x7a, 0x08,
                     0x7e, 0x01, 0x40, 0x57, 0x60, 0x11, 0x3e, 0x05, 0x2d,
                     0x05, 0x0f, 0x00, 0x00, 0x06, 0x55, 0x30};
    char arg_8h[256] = {};
    //fcn.080486eb関数で格納された値
    char arg_10h[1024] = "XV5xxMLwKP8KaayCSG04vQVv0kMSA3ZTRyZ4bCyet8VXace\
ow53CkC3JA0ZAg5wBx86kHvlCYhdeVPSCeEYy3rFVyOJdZTNgwxSgcRYZV6E28DqXMm5aYnfm\
3Z4uEDUz1FpmneQcuwOPwrMdx9Gy4Q3MKZIaalSHHKvpuQn5zbTtmgPfwpWVMSnuP0fV43mfu\
PQGX6ryJk2ANuuXxctZ03CNj5U6wF3X2cor5baXfZzFRltlMM5cl8BHAptzDkPMYFBWUg56us\
Lpnq9gawM0XWMOIbx8z99logD8nCzj4QsjHAsnWf1EfrGZs1JCyF8fsHKzSWXUp8QWLUfgtPW\
WwI6ae3f5eEE9eqKAAqqp8s05HMAnEltRpFAe5jq25LW71BdnMVlP8p9EkD3ICugWJzZSo2sa\
KenlJiMa7kOvCVc1qPAvEl0G2Txv79FSK2req4wpfoEv9u5ZwzqrSn2n8z3e8T3SfbzwKFDvr\
5Izhh1Ndt6w91CNqwGWwdDzb3VpAU7yn9RJrTWTZKKYc21WmKaetofqNwSYFPT4jdl3bM6Fe0\
NFClMqXcuC1LnCeVWy1OVvDUGw8g7lqO6Sfa9flHv0HkBt5WwANXpS1ddDQONQTSt4keGlBYA\
q9bzBBTKO9gy3agaT2GmKWt6rYacOM2kFq9rjWaZgSrhjxCOMO83jOixVfyEIQwDF5LUNc679\
WWtTFk0LLLYXuP1iZwnqs0PXrXwaqtfGO4GuqiU9ciDpBTHbxCql4WLrbMSSpqVvAmazvOAJn\
FvmcIdBfp7fZEd16i6h47IW7wPquyWQL5x9ePrJWZx6skvq2Gt0AcPBMMg5bSYGvcN43g34Uj\
FmAuj9WDITQ6Z6bde8grMMpyyAJYQwr4ycZJN0vaJp9WGr6DaZB98THfQPhgiRvOGW3GLT03H\
gnR3kZXW0zt38b790Uvkj7yjAAX6ItBQb0zMt95hK8eyPkP1cgHSapReU2G6I6UJjQ0pFUgHf\
pK6pmkmJbrinid5WqgImMunLrwR0";

    int eax;
    int edx;
    int local_14h;

    srand(43);

    for (local_14h = 0; local_14h < 43; local_14h++)
    {
        eax = rand();
        edx = eax;
        eax = eax / 31;
        eax = eax >> 22;
        edx = edx + eax;
        edx = edx & 1023;
        edx = edx - eax;

        arg_8h[local_14h] = arg_ch[local_14h] ^ arg_10h[edx];
    }

    printf("%s\n", arg_8h);

    return 0;
}
